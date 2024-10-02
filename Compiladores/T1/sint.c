#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "analex.h"
#include "pilha.h"

int token, temp, i;
char posfixo[MAX];
char holder;


void E();
void E_linha();
void T();
void T_linha();
void F();

void erro_sint(){
    printf("ERRO SINTATICO NA LINHA %d\n", linha);
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
        a = pop();
        b = pop();
        push(b + a);
        holder = '+';
        strcpy(&posfixo[temp], &holder);
        temp++;
        posfixo[temp] = ' ';
        temp++;
        E_linha();
        break;

    case '-':
        consumir('-');
        T();
        a = pop();
        b = pop();
        push(b - a);
        holder = '-';
        strcpy(&posfixo[temp], &holder);
        temp++;
        posfixo[temp] = ' ';
        temp++;
        E_linha();
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
        holder = '*';
        strcpy(&posfixo[temp], &holder);
        temp++;
        posfixo[temp] = ' ';
        temp++;
        b = pop();
        a = pop();
        push(a * b);
        T_linha();
        break;

    case '/':
        consumir('/');
        F();
        holder = '/';
        strcpy(&posfixo[temp], &holder);
        temp++;
        posfixo[temp] = ' ';
        temp++;
        b = pop();
        a = pop();
        push(a / b);
        T_linha();
        break;
    }
}

void F()
{
    switch(token){
        case NUM:
            consumir(NUM);
            int make_char = tokenval;
            int tam = 0;
            while(make_char != 0){
                make_char /= 10;
                tam++;
            }

            if(tam == 0){
                tam = 1;
                posfixo[temp] = '0';
                temp++;
            }

            make_char = tokenval;
            for(i = (tam - 1) + temp; i>= temp; i--){
                posfixo[i] = (make_char % 10) + '0';
                make_char /= 10;
            }

            temp += tam;
            posfixo[temp] = ' ';
            temp++;

            push(tokenval);
            break;

        case '(':
            consumir('(');
            E();
            consumir(')');
            break;

        default:
            erro_sint();
            break;
    }
}

int main(){
    token = analex();

    E();

    if(token == ';'){
        printf("\nEXPRESSAO CORRETA");
        printf("\nNOTACAO POSFIXA: %s", posfixo);
        printf("\nRESULTADO DA EXPRESSAO: %i",pop());
    }
    else{
        erro_sint();
    }
    return 0;
}