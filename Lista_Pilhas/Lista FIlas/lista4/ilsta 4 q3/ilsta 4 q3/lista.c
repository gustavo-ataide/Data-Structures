#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


void cria(ListaDE *l){
    l->inicio = NULL;
    l->fim = NULL;
}

int vazia(ListaDE *l){
  if (l->inicio == NULL)
    return 1;
  return 0;
}

int tamanho(ListaDE *l){
  No *aux = l->inicio;
  int cont = 0;
  
  while(aux!=NULL){
    aux = aux->prox;
    cont++;
  }

  return cont;
}

int scantrecho(ListaDE *l,TipoTrecho *t){
    printf("Digite a direçao:\n Esquerda\n Direita\n Cima\n Baixo\n Sua resposta: ");scanf("%s", t->direcao);
    printf("Digite a distancia: ");scanf("%f", &(t->distancia));
    t->idtrecho = (rand() % (1000 - 0 + 1)) + 0;
    return 0;
}

int busca(ListaDE *l){
    int id;
    printf("Digite o ID do trecho:\n Sua resposta:");scanf("%d", &id);
  No *aux = l->inicio;
  int pos=0;
  while(aux!=NULL){
    if (aux->trecho.idtrecho == id){
      return pos;
    }
    pos++;
    aux=aux->prox;
  }
  return -1;
}

//insere no final
int inserir(ListaDE *l ){
  No *novo = (No *) malloc(sizeof(No));
    TipoTrecho *elem = (TipoTrecho *)malloc(sizeof(TipoTrecho));
    scantrecho(l,elem);
  if (novo == NULL)
    return 0;
  novo->trecho = *elem;
  novo->prox = novo->ant = NULL;
  
  if (vazia(l)){
    l->inicio = l->fim = novo;
    //novo->prox = NULL;
    //novo->ant = NULL;
      l->distancia += elem->distancia;
    return 1;
  }

  //inserir no final
  l->fim->prox = novo;
  novo->ant = l->fim;
  l->fim = novo;
    l->distancia += elem->distancia;
  return 1;

  /*No *aux = l->inicio;

  while (aux->prox != NULL){
    aux = aux->prox;
  }
  aux->prox = novo;
  novo->dado = elem;
  novo->prox = NULL;  
  return 1;*/
  
}

int inserirInicio(ListaDE *l){
  No *novo = (No *) malloc(sizeof(No));
    TipoTrecho *elem = (TipoTrecho *)malloc(sizeof(TipoTrecho));
    scantrecho(l,elem);
  if (novo == NULL)
    return 0;
  novo->trecho = *elem;
  novo->prox = novo->ant = NULL;

  if (vazia(l)){
    l->inicio = l->fim = novo;
    //novo->prox = NULL;
    //novo->ant = NULL;
    return 1;
  }

  //inserir no comeco
  novo->prox = l->inicio;
  l->inicio->ant = novo;
  l->inicio = novo;
  return 1;

}

int inserirPosicao(ListaDE *l){
    int pos;
    printf("\nQual a posicao desejada?\n Sua resposta:");scanf("%d", &pos);
    if (pos==0){
      inserirInicio(l);
      return 1;
    }
    if (pos==tamanho(l)+1){
      inserir(l);
      return 1;
    }
    TipoTrecho *elem = (TipoTrecho *)malloc(sizeof(TipoTrecho));
    scantrecho(l,elem);





  No *novo = (No *) malloc(sizeof(No));
  if (novo == NULL)
    return 0;
  novo->trecho = *elem;

  No *aux=l->inicio;
  for (int i=0; i<pos-1; i++){
    aux=aux->prox;
  }

  novo->prox = aux->prox;
  novo->ant = aux;
  aux->prox->ant = novo;
  aux->prox = novo;
  return 1;

}




int remover(ListaDE *l){
  int pos=busca(l);
  if (pos==-1)
    return 0;

  // remocao no inicio
  if (pos==0){
    No *temp = l->inicio;
    l->inicio = l->inicio->prox;
    l->inicio->ant = NULL;
    free(temp);
    return 1;
  }

  No *aux=l->inicio;
  for (int i=0; i<pos-1; i++){
    aux=aux->prox;
  }
  No* temp = aux->prox;
  aux->prox = aux->prox->prox;
  aux->prox->ant = aux;
  free(temp);

  return 1;
}

void exibedistanciatotal(ListaDE *l){
    printf("\nDISTANCIA TOTAL: %.2f\n", l->distancia);
}

void exibir(ListaDE *l){
  printf("Ultimas inserçoes:\n\n");
  for (No *aux=l->inicio; aux!=NULL; aux=aux->prox){
      if (aux != NULL){
          printf("Direção: %s\n", aux->trecho.direcao);
          printf("Distancia: %.2f\n", aux->trecho.distancia);
          printf("Id do trecho: %d\n\n", aux->trecho.idtrecho);
      }
  }
}

