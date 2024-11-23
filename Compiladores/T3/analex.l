%{
    #include <stdio.h>
    #include "sint.h"
    #include "tabsimb.h"

    int nline = 1;
    int yyerror(char *s){
        printf("%s na linha %d\n", s, nline);
}

%}

dig [0-9]
letra [a-zA-Z]

%%
\"{letra}\" {return ARG_ARQ;}
"//".* {}
"/*"([^*]|\*[^/])*"*/" {}
\"[^\"]*\" {return STRING;}

"==" {return EQ;}
">" {return GT;}
">=" {return GE;}
"<" {return LT;}
"<=" {return LE;}
"!=" {return NEQ;}
"=" {return ATR;}
"(" {return OPAR;}
")" {return CPAR;}
";" {return PV;}
"{" {return OKEY;}
"}" {return CKEY;}
"[" {return OB;}
"]" {return CB;}
"," {return VIR;}
"||" {return OR;}
"!" {return NOT;}
"&&" {return AND;}
"*" {return MULT;}
"+" {return PLUS;}
"-" {return MINUS;}

"while" {return WHILE;}
"return" {return RETURN;}
"if" {return IF;}
"endif" {return ENDIF;}
"else" {return ELSE;}
"for" {return FOR;}
"int" {return INT;}
"float" {return FLOAT;}
"char" {return CHAR;}
"void" {return VOID;}

{dig}+("."{dig}+)? {yylval = atoi(yytext); return NUM;}
{letra}({letra}|{dig}|"_")* {insere(yytext); return ID;}

[ \t\r] { }
\n  { nline = nline + 1; }
.   {printf("erro lexico na linha %d - %s\n", nline, yytext);}

%%
#ifndef yywrap
int yywrap() {return 1; }
#endif