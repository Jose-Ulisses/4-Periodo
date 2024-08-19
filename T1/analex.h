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

    fflush(stdin);
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
        return NUM;
    }
    
    printf("Erro lexico!\n");
    exit(1);
}