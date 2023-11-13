#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filadin.h"

void cria(Fila *f){
  f->inicio = f->fim = NULL;
  f->tam = 0;
}

int vazia(Fila *f){
  if (f->inicio == NULL)
    return 1;
  return 0;
}

int tamanho(Fila *f){
  return f->tam;
}

//void scanfpessoa(Pessoa *p) {
//
//    printf("Digite o nome da pessoa: \n");
//    scanf("%s", p->nome);
//
//    printf("Digite o cpf da pessoa: \n");
//    scanf("%s", p->cpf);
//
//    printf("Digite idade da pessoa: \n");
//    scanf("%d", &(p->idade));
//
//    return ;
//}

//int entrar(Fila *f, char nome[30]){
//
//  No *novo = (No *) malloc (sizeof(No));
//
//  if (novo == NULL)
//    return 0;
//    strcpy(nome, novo->nome);
//  novo->prox = NULL;
//  f->tam++;
//
//  //1o caso
//  if (vazia(f)){
//    f->inicio = novo;
//    f->fim = novo;
//    return 1;
//  }
//
//  //2o caso: fila nao vazia
//  f->fim->prox = novo;
//  f->fim = novo;
//  return 1;
//
//}
//
//char sair (Fila *f){
//    char nome[30];
//    strcpy(nome,f->inicio->nome);
//    f->inicio = f->inicio->prox;
//    return *nome;
//}

//void exibir(Fila *f){
//  printf("\n");
//  for (No *aux=f->inicio; aux!=NULL; aux=aux->prox){
//      printf("Nome: %s\n", aux->pessoa->nome);
//      printf("Cpf: %s\n", aux->pessoa->cpf);
//      printf("Idade: %d\n", aux->pessoa->idade);
//  }
  
//}
int entrar(Fila *f, char nome[30]) {
    No *novo = (No *) malloc(sizeof(No));
  
    if (novo == NULL)
        return 0;

    strcpy(novo->nome, nome);
    novo->prox = NULL;
    f->tam++;

    if (vazia(f)) {
        f->inicio = novo;
        f->fim = novo;
        return 1;
    }

    f->fim->prox = novo;
    f->fim = novo;
    return 1;
}

char* sair(Fila *f) {
    char *nome = malloc(30 * sizeof(char));
    strcpy(nome, f->inicio->nome);
    f->inicio = f->inicio->prox;
    return nome;
}
