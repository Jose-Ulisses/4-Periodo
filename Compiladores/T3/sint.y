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
%token RETURN
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
%token ARG_ARQ
%token PH

%left OR
%left AND
%left GT LT LE GE EQ NEQ 
%left PLUS MINUS
%right NOT

%start ProgL
%%

ProgL : Prog {printf("Sem erros sintáticos");}
    ;

Prog:
     ListaFunc 
    ;

Decl:
     Tipo ListaID
    ;

Tipo:
     INT
    |FLOAT
    |VOID
    |CHAR
    ;

ListaID:
     ID VIR ListaID 
    |ID 
    |Atr VIR ListaID
    |Atr
    ;

Exp: 
     Exp PLUS Exp       
    |Exp MINUS Exp       
    |Exp AND Exp       
    |Exp OR Exp        
    |Exp GT Exp
    |Exp LT Exp
    |Exp LE Exp
    |Exp GE Exp
    |Exp EQ Exp
    |Exp NEQ Exp
    |NOT Exp
    |OPAR Exp CPAR        
    |NUM                
    |ID
    |ID OB NUM CB
    |FuncCall
    |ARG_ARQ
    |STRING
    ;

Atr:
     ID ATR Exp
    |ID OB NUM CB ATR Exp
    ;

ListaExp:
     Exp VIR ListaExp
    |Exp
    ;

Wst:
     WHILE OPAR Exp CPAR ComandoComposto 
    ;

Fst:
     FOR OPAR ID VIR Exp VIR Exp CPAR
    ;

Ifst:
     IF OPAR Exp CPAR ComandoComposto ENDIF
    |IF OPAR Exp CPAR ComandoComposto ELSE ComandoComposto ENDIF
    ;

ListaComando:
     Comando ListaComando 
    |Comando
    ;

Comando:
     Atr PV 
    |Wst
    |Fst
    |Ifst
    |Decl PV
    |FuncCall PV
    ;

ComandoComposto:
     Comando
    |OKEY ListaComando CKEY
    |OKEY ListaComando ReturnStm CKEY
    |OKEY ReturnStm CKEY
    ;

FuncCall:
     ID OPAR ListaExp CPAR
    |ID OPAR CPAR
    ;

FuncStm:
     DeclFunc OPAR CPAR OKEY ListaComando CKEY
    |DeclFunc OPAR CPAR OKEY ListaComando ReturnStm CKEY
    |DeclFunc OPAR ListaDeclFunc CPAR OKEY ListaComando CKEY
    |DeclFunc OPAR ListaDeclFunc CPAR OKEY ListaComando ReturnStm CKEY
    ;

ReturnStm:
     RETURN NUM PV
    |RETURN ID PV
    ;

DeclFunc:
    Tipo ID
    ;

ListaDeclFunc:
     DeclFunc VIR ListaDeclFunc 
    |DeclFunc
    ; 

ListaFunc:
     FuncStm
    |FuncStm ListaFunc
    ;
     
%%

void main(int argc, char **argv){
    yyin = fopen(argv[1], "r");
    yyparse();
}