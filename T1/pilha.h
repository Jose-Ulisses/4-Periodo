#define MAX 1000

int Pilha[MAX];
int tam = 0;
int a, b, c, d, e;
void push(char valor){
	Pilha[tam++] = valor;
}

char pop(){
	return Pilha[tam--];
}

int topo(){
    return Pilha[tam-1];
}

