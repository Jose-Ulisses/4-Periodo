#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM 256
#define ID 257
#define QUIT 258
#define PRINT 269

int tokenval;
int linha = 1;

int analex(){
    int ch;
    ch = getchar();

    while(ch == ' ' || ch == '\t' || ch == '\n')
    {
        if(ch == '\n')
            linha++;
        ch = getchar();
    }

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
        ch = getchar();

        while(isdigit(ch)){
            tokenval = tokenval * 10 + ch - '0';
            ch = getchar();
        }
        ungetc(ch, stdin);
        return NUM;
    }

    printf("Erro lexico na linha %d\n", linha);
    exit(1);
}