%{
    #include <stdio.h>
    #include "tokens.h"
    #include "tabsimb.h"
    int nline = 1;
%}
/* Expressoes Regulares Simples */

dig [0-9]
digs [1-9]
letra [a-zA-Z]

%%
/* Definicoes tokens(regras) */

"==" {return EQ;}
">=" {return GE;}
"if" {return IF;}
"int" {return INT;}
"float" {return FLOAT;}
{digs}{dig}+|0 {return NUM;}
{letra}({dig}|{letra})* {insere(yytext);return ID;}

%%
/* Funcoes */

int main(int argc, char **argv){
    int token, i = 1;
    yyin = fopen(argv[1], "r";)
    token = yylex();

    while(token){
        token = yylex();
    }
}
