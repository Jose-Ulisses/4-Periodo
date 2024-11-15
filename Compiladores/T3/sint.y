%{
    #include"analex.c"
%}

%token NUM
%token ID
%token IF
%token ENDIF
%token FOR
%token WHILE
%token AND 
%token OR
%token EQ
%token LT
%token LE
%token GT
%token GE
%token INT 
%token FLOAT
%token OPAR
%token CPAR
%token OKEY
%token CKEY
%token PV
%token VIR
%token ATR
%token ELSE
%token PLUS
%token MINUS
%token RTRN
%token NOT
%token PER
%token AST
%token OB
%token CB
%token QUOTE
%token INVSLASH
%token MULT
%token STRING
%token VOID 
%token CHAR

%left'+''-'
%left'*''/'

%start Prog
%%

ProgL : Prog {printf("Sem erros sintaticos\n");}
    ;

Prog:   
     Exp ';'
    |Atr ';'
    |Wst
    |Fst
    |Ifst
    |FunkCall ';'
    |Decl ';'
    ;

Comando:
     Exp ';'
    |Atr ';' 

    ;

ListaID:
     ID ',' ListaID 
    |ID ';'
    |Atr ',' ListaID 
    |Atr ';'     
    ;


ListaExp:
     Exp ',' ListaExp
    |Exp
    ;

Tipo:
     INT
    |FLOAT
    |VOID
    |CHAR
    ;

Decl:
     Tipo ListaID 
    |Tipo Atr ';'
    ;

FunkCall ';'
    ID '(' ListaExp ')'
    ;

Ifst:
     if '(' Exp ')' ComandoComposto endif
    |if '(' Exp')' ComandoComposto else comandoComposto endif
    ;
Fst:
     for '(' ID ';' Exp ';' Exp ')' ComandoComposto
    ;

Wst:
     while '(' Exp ')' ComandoComposto
    ;

Atr:
     ID '=' Exp
    |ID '[' NUM ']' '=' Exp
    ;

Exp: 
     Exp '+' Exp
    |Exp '-' Exp
    |Exp '*' Exp
    |Exp '/' Exp
    |Exp '&' '&' Exp
    |Exp '|' '|' Exp
    
    |Exp '>' Exp
    |Exp '<' Exp
    |Exp '<' '=' Exp
    |Exp '>' '=' Exp
    |Exp  '=' '=' Exp
    |Exp '!' '=' Exp
    
    |'(' Exp ')'
    |NUM
    |ID
    |ID '[' NUM ']' 
    |FunkCall
    ;
%%

void main(int argc, char **argv){
    yyin = fopen(argv[1], "r");
    yyparse();
}