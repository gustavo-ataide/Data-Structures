#ifndef LISTADIN_H
#define LISTADIN_H

typedef struct trecho{
    int idtrecho;
    char direcao[8];
    float distancia;
}TipoTrecho;

typedef struct no{
  TipoTrecho trecho;
  struct no *prox;
  struct no *ant;
}No;

typedef struct lista{
    float distancia;
  No *inicio;
  No *fim;
}ListaDE;

void cria(ListaDE *l);
int vazia(ListaDE *l);
int tamanho(ListaDE *l);
//int busca(ListaDE *l, int elem);
int scantrecho(ListaDE *l, TipoTrecho *trecho);
void exibedistanciatotal(ListaDE *l);
void exibir(ListaDE *l);
int inserir(ListaDE *l);
int inserirInicio(ListaDE *l);
int inserirPosicao(ListaDE *l);
int remover(ListaDE *l);


#endif
