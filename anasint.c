#include "analex.h"

int token;

void E();
void E_linha();
void T();
void T_linha();
void F();

void erro(){
    printf("ERRO SINTATICO\n");
    exit(1);
}

void consumir(int t)
{
    if (token == t)
        token = analex();
    else
        erro();
}

void E()
{
    T();
    E_linha();
}

void E_linha()
{
    switch (token)
    {
    case '+':
        consumir('+');
        T();
        E_linha();
        break;

    case '-':
        consumir('-');
        T();
        E_linha();
        break;

    default:
        break;
    }
}

void T()
{
    F();
    T_linha();
}


void T_linha()
{
    switch (token)
    {
    case '*':
        consumir('*');
        F();
        T_linha();
        break;

    case '/':
        consumir('/');
        F();
        T_linha();
    default:
        break;
    }
}

void F()
{
    switch (token)
    {
    case NUM:
        consumir(NUM);
        break;

    case '(':
        consumir('(');
        E();
        consumir(')');
        break;

    default:
        break;
    }
}

int main(){
    token = analex();
    E();
    if(token == ';')
        printf("Sem erros sintaticos");
    else
        erro_sint();
    return 0;
}