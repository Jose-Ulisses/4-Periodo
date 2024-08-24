#include <stdio.h>
#include <stdlib.h>
#include "analex.h"
#include "pilha.h"

int token;

void E();
void E_linha();
void T();
void T_linha();
void F();

void erro_sint(){
    printf("Erro sintatico na linha: %d\n", linha);
    exit(1);
}

void consumir(int t)
{
    if (token == t)
    {
        token = analex();
    }
    else{
        printf("\nErro ao consumir\n");
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
        printf("+ ");
        pop();
        a = pop();
        b = pop();

        push(b + a);
        //printf("\nResultado de %d + %d = %d\n",b, a, topo());
        E_linha();
        break;

    case '-':
        consumir('-');
        T();
        printf("- ");
        pop();
        a = pop();
        b = pop();
        push(b - a);
        //printf("\nResultado de %d - %d = %d\n",b, a, topo());
        E_linha();
        break;

    default:
        //printf("\ndefault da E_linha!!\n");
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
        printf("* ");
        pop();
        a = pop();
        b = pop();
        push(b * a);
        //printf("\nResultado de %d * %d = %d\n",b, a, topo());
        T_linha();
        break;

    case '/':
        consumir('/');
        F();
        printf("/ ");
        pop();
        a = pop();
        b = pop();
        push(b / a);
        //printf("\nResultado de %d / %d = %d\n",b, a, topo());
        T_linha();
        break;

    default:
        //printf("\ndefault da T_linha!\n");
        break;
    }
}

void F()
{
    switch(token){
        case NUM:
            printf("%d" , tokenval);
            push(tokenval);
            consumir(NUM);
            break;

        case '(':
            consumir('(');
            E();
            consumir(')');
            break;
    }
}

int main(){
    token = analex();
    E();

    if(token == ';'){
        printf("\nResultado final: %d\n",topo());
        printf("\nSem erros sintaticos");
    }
    else{
        erro_sint();
    }
    return 0;
}