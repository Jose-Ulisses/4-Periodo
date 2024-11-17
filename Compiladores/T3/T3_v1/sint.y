%{
    #include "analex.c"
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
%token NEQ
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
%left '<' '>' LE GE EQ NEQ 
%left AND OR 
%right '='

%start ProgL
%%

ProgL : Prog {printf("sem erros sintaticos");}
    ;

Prog:   
    Exp ';'
    |Atr ';'
    |Wst
    |Fst
    |Ifst
    |FuncCall ';'
    |Decl ';'
    ;

Exp: 
    Exp '+' Exp         {$$ = $1 + $2;}
    |Exp '-' Exp        {$$ = $1 - $2;}
    |Exp '*' Exp        {$$ = $1 * $2;}
    |Exp '/' Exp        {$$ = $1 / $2;}
    |Exp AND Exp        {$$ = $1 * $2;}
    |Exp OR Exp         {$$ = $1 + $2;}
    |Exp '>' Exp
    |Exp '<' Exp
    |Exp LE Exp
    |Exp GE Exp
    |Exp EQ Exp
    |Exp NEQ Exp
    |'(' Exp ')'        {$$ = $2;}
    |NUM                {$$ = yylval;}
    ;

FuncCall:
    ID '(' ListaExp ')'
    ;

ListaExp:
    Exp ',' ListaExp
    |Exp
    ;

Atr:
    ID '=' Exp
    |ID '[' NUM ']' '=' Exp
    ;

Wst:
    WHILE '(' Exp ')' ComandoComposto
    ;

Fst:
    FOR '(' ID ';' Exp ';' Exp ')' ComandoComposto
    ;

Ifst:
    IF '(' Exp ')' ComandoComposto ENDIF
    |IF '(' Exp')' ComandoComposto ELSE ComandoComposto ENDIF
    ;

ComandoComposto:
    Comando
    |'{' ListaComando '}'
    ;

Comando:
    Exp ';'
    |Atr ';' 
    ;

ListaComando:
    Comando ListaComando
    |Comando
    ;

Decl:
    Tipo ListaID 
    |Tipo Atr ';'
    ;

Tipo:
    INT
    |FLOAT
    |VOID
    |CHAR
    ;

ListaID:
    ID ',' ListaID 
    |ID ';'
    ;
     
%%

void main(int argc, char **argv){
    yyin = fopen(argv[1], "r");
    yyparse();
}