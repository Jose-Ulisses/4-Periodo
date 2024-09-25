#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM 256
#define ID 257
#define QUIT 258
#define PRINT 259

int tokenval;
int linha = 1;

void erro_lex(int linha){
    printf("ERRO LEXICO NA LINHA %d\n", linha);
    exit(1);
}

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
    erro_lex(linha);
}