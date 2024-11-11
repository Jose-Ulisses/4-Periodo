%{
    #include <stdio.h>
    #include "sint.h"
    #include "tabsimb.h"
    int nline = 1;
    int yyerror(char *s){
        fprintf("%s na linha %d", s, nline);
    }
%}

dig [0-9]
letra [a-zA-Z]

%%
"//".* {}
"/*"([^*]|\*[^/])*"*/" {}
\"[^\"]*\" {return STRING;}

"==" {return EQ;}
">" {return GT;}
">=" {return GE;}
"<" {return LT;}
"<=" {return LE;}
"=" {return ATR;}
"(" {return OPAR;}
")" {return CPAR;}
";" {return PV;}
"{" {return OKEY;}
"}" {return CKEY;}
"," {return VIR;}
"||" {return OR;}
"!" {return NOT;}
"&&" {return AND;}
"*" {return MULT;}
"+" {return PLUS;}
"-" {return MINUS;}

"while" {return WHILE;}
"return" {return RTRN;}
"if" {return IF;}
"endif" {reeturn ENDIF;}
"else" {return ELSE;}
"for" {return FOR;}
"int" {return INT;}
"float" {return FLOAT;}
"char" {return CHAR;}
"void" {return VOID;}

{dig}+("."{dig}+)? {return NUM;}
{letra}({letra}|{dig}|"_")* {insere(yytext);return ID;}

[ \t\r] { }
\n  { nline++; }
.   {printf("erro lexico na linha %d - %s\n", 
             nline, yytext);}

%%
#ifndef yywrap
int yywrap() {return 1; }
#endif
   