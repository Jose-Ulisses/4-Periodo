#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM 256
#define ID 257
#define QUIT 258
#define PRINT 269

int tokenval;

int analex(){
    char ch;

    ch = getchar();

    if(ch == '+')
        return '+';

    if(ch == '-')
        return '-';

    if(ch == '*')
        return '*';

    if(ch == '/')
        return '/';

    if(ch == '(')
        return '(';

    if(ch == ')')
        return ')';

    if(ch == ';')
        return ';';

    if(isdigit(ch)){
        tokenval = ch - '0';
        return NUM;
    }
    
    printf("ERRO LEXICO na linha X !!!\n");
    exit(1);
}