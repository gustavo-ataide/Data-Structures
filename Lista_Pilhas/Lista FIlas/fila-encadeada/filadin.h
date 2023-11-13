#ifndef __FILADIN_H__
#define __FILADIN_H__


    

typedef struct no{
  char nome[30];
  struct no *prox;
}No;

typedef struct fila{
  No *inicio;
  No *fim;
  int tam;
}Fila;

//void scanfpessoa(Pessoa *p);
void cria(Fila *f);
//int vazia(Fila *f);
//int tamanho(Fila *f);
int entrar(Fila *f, char nome[30]);
char* sair(Fila *f);
//void exibir(Fila *f);

#endif



