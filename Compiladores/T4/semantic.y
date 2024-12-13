%{ 
	/* Para simplificar a notação, S é para sintetizar. A atualizar. V verificar */
    #include <string.h>
	#ifndef  ANALEX
	#include "analex.c"
	#define ANALEX
	#endif 
    #ifndef  CODIGO
	#include "codigo.h"
    #define CODIGO
    #endif
    #ifndef TIPOS
    #include "tipos.h"
    #define TIPOS
    #endif
%}

%union {

	struct no{
		int place;
		char *code;
		int tipo;
	} node;

	int val;
    int ival;
    float fval; 
    
    struct ids{
		int ids[50];
		int tam;
		char *code;
	} id_list;
}

%token <node> NUM 
%token <val> ID 
%token WHILE
%token IF 
%token ELSE
%token ENDIF
%token CHAR
%token INT
%token FLOAT
%token VOID
%token OR
%token AND
%token NOT
%token GE
%token LE
%token EQ
%token NEQ
%token DO
%token STRING
%token FOR

%type <val> Type TypeF
%type <id_list> IDs ParamList ArgList
%type <node> Atribuicao Exp Function Prog Statement Statement_Seq 
%type <node> If While Compound_Stt DoWhile FunctionCall Decl

%right '='

%left OR
%left AND

%nonassoc EQ NEQ

%left '>' '<' GE LE

%left '+' '-'
%left '*' '/' '%'

%right NOT

%right '(' '['


%start ProgL
%% 
ProgL : Prog {
		printf("%s",$1.code);
	} /* S código. */
    ;
    
Prog : Prog Function {
		create_cod(&$$.code); 
		insert_cod(&$$.code,$1.code); 
		insert_cod(&$$.code,$2.code);
	} /* S código. */
	| Function {
        create_cod(&$$.code); 
		insert_cod(&$$.code,$1.code); 
    }/* S código. */
	;	

Function :
    TypeF ID '(' ParamList ')' '{' Statement_Seq '}' { 
        adiciona_funcao_tabela(obtemNome($2), $1, &$4);
        create_cod(&$$.code);
        if($7.code != NULL)
            insert_cod(&$$.code, $7.code);
        Funct(&$$, $2, $7);        
    }
    | TypeF ID '(' ')' '{'Statement_Seq '}' {
        adiciona_funcao_tabela(obtemNome($2), $1, NULL); 
        create_cod(&$$.code);
        if($6.code != NULL)
            insert_cod(&$$.code, $6.code);
        Funct(&$$, $2, $6);                
    }
    ;
	
FunctionCall :
    ID '(' ArgList ')' {
        int funcPos = $1; 
        if (getTipo(funcPos) == -1)
            yyerror("Uso de identificador nao declarado");
        else if (Tabela[funcPos].tam_arg_list != $3.tam) 
            yyerror("Número de argumentos incompatível!");
    
        create_cod(&$$.code);
        if($3.code != NULL)
            insert_cod(&$$.code, $3.code);
        Call(&$$, funcPos, $3);

    }
    | ID '(' ')' {
        int funcPos = procura(obtemNome($1));
        if (funcPos == -1)
            yyerror("Uso de identificador nao declarado");
         else if (Tabela[funcPos].tam_arg_list != 0)
            yyerror("Número de argumentos incompatível!");
        
        Call_blank(&$$);
    }
    ;

    
ArgList:
    Exp ',' ArgList {
        create_cod(&$$.code);
        $$.tam = $3.tam;
        for (int i = 0; i < $3.tam; i++) 
            $$.ids[i] = $3.ids[i];

        $$.ids[$$.tam] = $1.place;
        create_cod(&$$.code);
        if($1.code != NULL)
            insert_cod(&$$.code, $1.code);

        if($3.code != NULL)
            insert_cod(&$$.code, $3.code);
        
        $$.tam++;
    }
    | Exp {
        create_cod(&$$.code);
        $$.tam = 1;
        $$.ids[0] = $1.place;
        if($1.code != NULL)
            insert_cod(&$$.code, $1.code);
    }
    ;


ParamList: 
    ParamList ',' Type ID {
        $$.tam = $1.tam;
        for (int i = 0; i < $1.tam; i++) 
            $$.ids[i] = $1.ids[i];
        
        $$.ids[$$.tam] = $4;
        if(getTipo($4) == -1)
            set_type($$.ids[$$.tam], $3);
        
        else 
            if(getTipo($4) != $3)
                yyerror("Tipos de argumentos incompatíveis!");
        
        $$.tam++;
    }
    | Type ID {
        $$.tam = 1;
        $$.ids[0] = $2;
        if(getTipo($2) == -1)
            set_type($$.ids[0], $1);
        
        else 
            if(getTipo($2) != $1)
                yyerror("Tipos de argumentos incompatíveis!");
        }
    ;

Decl:
    Type IDs {
        int tipo = -5;
        create_cod(&$$.code);
        if ($2.code != NULL)
            insert_cod(&$$.code, $2.code);

        for (int i = 0; i < $2.tam; i++){
            tipo = getTipo($2.ids[i]);
            set_type($2.ids[i], $1);
        }
    }
    ;


IDs: 
    IDs ',' ID {
        $$.tam = $1.tam;
        for (int i = 0; i < $1.tam; i++) 
            $$.ids[i] = $1.ids[i];
        
        $$.ids[$$.tam] = $3;
        $$.tam++; 
    }
    | IDs ',' Atribuicao {
        $$.tam = $1.tam;
        for (int i = 0;i < $1.tam; i++) 
            $$.ids[i] = $1.ids[i];
        
        int pos = $3.place;
        create_cod(&$$.code);
        insert_cod(&$$.code, $3.code);
        $$.ids[$$.tam] = pos;
        $$.tam++;
    }
    | IDs ',' ID '[' NUM ']' {
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        $$.tam = $1.tam;
        for (int i = 0;i < $1.tam; i++)     
            $$.ids[i] = $1.ids[i];
    
        $$.ids[$$.tam] = $3;
        $$.tam++;
    }
    | ID '[' NUM ']' 
    {
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        $$.tam = 1;
        $$.ids[0] = $1;
    }
    | ID 
    {
        $$.tam = 1;
        $$.ids[0] = $1;
    }
    | Atribuicao 
    {
        int pos = $1.place;
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
        $$.tam = 1;
        $$.ids[0] = pos;
    }
    ;



	
TypeF :
	  VOID {$$ = VOID;}
	| Type {$$ = $1;}
	;

Type :
	  INT {$$ = INT;}
    | CHAR {$$ = CHAR;} 
	| FLOAT {$$ = FLOAT;}
	;
			
Statement_Seq :
    Statement Statement_Seq {
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
        insert_cod(&$$.code, $2.code);
    }
    | Statement {
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
    }
    ;

		
Statement: 
	  Atribuicao ';' {
        if(getTipo($1.place) == -1)
        {
            yyerror("Uso de variável não declarada");
        }
        if(tipos_inconsistentes_atrib(getTipo($1.place), $1.tipo) == -1)
        {
            yyerror("Tipos incompatíveis");
        }
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
    }
	|If  
    {
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
    }
	| While 
    {
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
    }
	| DoWhile 
    {
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
    }
	| FunctionCall ';' 
    {
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
    }
    | Decl ';' 
    {
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code);
    }
	;

Compound_Stt :
	  Statement {$$ = $1;}
	| '{' Statement_Seq '}' {$$ = $2;}
	;
		
If :
	  IF '(' Exp ')' Compound_Stt ENDIF { 
		If(&$$, $3,$5);
	}
	| IF '(' Exp ')' Compound_Stt ELSE Compound_Stt ENDIF {
		IfElse(&$$, $3, $5, $7);
	}
	;

While:
    WHILE '(' Exp ')' Compound_Stt {
        While(&$$, $3, $5);
    }
    ;

DoWhile:
    DO Compound_Stt WHILE '(' Exp ')' ';' {
        DoWhile(&$$, $2, $5);
    }
    ;

			
Atribuicao: 
    ID '[' NUM ']' '=' Exp 
    {
        if(tipos_inconsistentes_atrib(getTipo($1), $6.tipo) == -1)
            yyerror("Tipos incompatíveis");
    
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        $$.place = $1;
        Atrib(&$$, $6);
        $$.tipo = $6.tipo;
    }
    | ID '=' Exp 
    {
        if(tipos_inconsistentes_atrib(getTipo($1), $3.tipo) == -1)        
            yyerror("Tipos incompatíveis");

        $$.place = $1;
        Atrib(&$$, $3);
        $$.tipo = retorna_maior_tipo(getTipo($1), $3.tipo);
    }
    ;

				
Exp :
	  Exp '+' Exp {
        $$.tipo = retorna_maior_tipo($1.tipo, $3.tipo);
        ExpAri(&$$, $1, $3, "add");
        }
	| Exp '-' Exp {
        $$.tipo = retorna_maior_tipo($1.tipo, $3.tipo);
        ExpAri(&$$, $1, $3, "sub");
        }
	| Exp '*' Exp {        
        $$.tipo = retorna_maior_tipo($1.tipo, $3.tipo);
        ExpAri(&$$, $1, $3, "mul");
        }
	| Exp '/' Exp {
        $$.tipo = retorna_maior_tipo($1.tipo, $3.tipo);
        ExpAri(&$$, $1, $3, "div");
        }
	| Exp '>' Exp {
		$$.tipo = INT;
		Bgt(&$$, $1, $3, "bgt");
		}
	| Exp '<' Exp {
		$$.tipo = INT;
		Bgt(&$$, $1, $3, "blt");
		}
	| Exp GE Exp  {
		$$.tipo = INT;
		Bgt(&$$, $1, $3, "blt");
		}
	| Exp LE Exp  {
		$$.tipo = INT;
		Bgt(&$$, $1, $3, "bgt");
		}
	| Exp EQ Exp  {
		$$.tipo = INT;
		Bgt(&$$, $1, $3, "beq");
		}
	| Exp NEQ Exp {
		$$.tipo = INT;
		Bgt(&$$, $1, $3, "bnq");
	}
	| Exp OR Exp {
		$$.tipo = INT;
		Explog(&$$, $1, $3, "or");
	} 
	| Exp AND Exp {
		$$.tipo = INT;
		Explog(&$$, $1, $3, "and");
	} 
	| NOT Exp {
        create_cod(&$$.code);
		$$.tipo = INT;
	}
	| '(' Exp ')' {
        create_cod(&$$.code);
        if($2.code != NULL)
            insert_cod(&$$.code, $2.code);
		$$.tipo = $2.tipo;
        $$ = $2;
	}
	| NUM {
        if (yy_tipo == INT) {
            $$.tipo = INT;
            Li(&$$, yylval.ival);
        } else {
            $$.tipo = FLOAT;
            Li(&$$, yylval.fval);
        }
	}
	| ID '[' NUM ']' {
        if(getTipo($1) == -1)
            yyerror("Uso de variável não declarada");
        
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        create_cod(&$$.code);
        if($3.code != NULL)
            insert_cod(&$$.code, $3.code);
        $$.tipo = getTipo($1);
    }
	| ID  {
        int tipo = getTipo($1);
        if(tipo == -1)
            yyerror("Uso de variável não declarada");

        create_cod(&$$.code);
        $$.tipo = tipo;
    }
	| STRING {} 
	;   

%%  
int main(int argc, char **argv) {   
    yyin = fopen(argv[1], "r");
    yyparse();      
} 