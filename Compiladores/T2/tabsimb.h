#include <string.h>
#include <stdio.h>
#define MAX 1000

struct symbol{
    char lexema[50];
    int tam;
    int tipo;
};

int tam_tab = 0;

struct symbol Tabela[MAX];

int procura(char *lexema){
    int i;
    
    for (i = 0; i < tam_tab; i++)
        if(strcmp(Tabela[i].lexema, lexema) == 0)
            return i;
     
    return -1;
}

int insere(char *lexema){
    int onde_existe = procura(lexema);
    int existe_na_tabela = 1;
    
    struct symbol aux;

    if(onde_existe == -1)
        existe_na_tabela = 0;

    if(!existe_na_tabela){
        strcpy(aux.lexema, lexema);
        Tabela[tam_tab] = aux;
        return tam_tab++;
    }
    else
        return onde_existe;
    
}

char lexema[50];
char *get_lexema(int pos){
    strcmp(lexema, Tabela[pos].lexema);
    return lexema;
}

void imprime(){
    int i;
    printf("\nTabela de simbolos\n");

    for(i = 0; i < tam_tab; i++)
        printf("%d - %s", i, Tabela[i].lexema);
}