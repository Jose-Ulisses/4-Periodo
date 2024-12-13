char instrucao[200];

/************  Funcoes para manipulacao de  strings ****************/
// cria um codigo vazio
void create_cod(char **codigo) {
  *codigo = (char *) malloc(1);
  strcpy(*codigo, "");
}
// insere uma instrucao a uma lista de instrucoes ja existente
void  insert_cod(char **codigo, char *instrucao) {
char *aux = (char *)malloc(sizeof(codigo));
  aux = *codigo;
  *codigo = (char *) malloc(strlen(*codigo) + strlen(instrucao) + 2);
  strcpy(*codigo, aux);
  strcat(*codigo, instrucao);
  free(aux);
}
// imprime codigo na tela
void print_cod(char *codigo) {
  printf("%s", codigo);
}
/*******************************************************************/