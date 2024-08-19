#include "analex.h"

int token;

void E();
void E_linha();
void T();
void T_linha();
void F();

void erro_sint(){
    printf("Erro sintatico\n");
    exit(1);
}

void consumir(int t)
{
    if (token == t)
    {
        printf("\npassou\n");
        token = analex();
    }
    else{
        printf("\nErro no Consumir\n");
        erro_sint();
    }
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
    printf("\n%d\n", token);
    E();
    if(token == ';')
        printf("Sem erros sintaticos");
    else{
        printf("\nErro na main!");
        erro_sint();
    }



    return 0;
}