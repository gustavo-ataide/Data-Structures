
#include <stdio.h>
#include "pilhaseq.h"

void criarPilha(Pilha *p){
    p->topo = -1;
}

int empilhar (Pilha *p, int dado){
    int i;
    for (i=0;p->elementos[i]!= '\0'; i++){
    }
    p->elementos[i] = dado;
    p->topo = dado;
    return 1;
}

int desempilhar(Pilha *p){
    int i;
    for (i=0;p->elementos[i+1]!= '\0'; i++){
    }
    int dado = p->elementos[i];
    p->elementos[i] = '\0';
    p->topo = p->elementos[i-1];
    return dado;
}

int topo(Pilha *p,int *dado){
    *dado = p->topo;
    return 1;
}

int inverterpilha(Pilha *p){
    Pilha aux;
    criarPilha(&aux);
    esvaziar(&aux);
    int elem_aux;
    for(int i=0;p->elementos[i] != p->topo; i++){
        elem_aux = desempilhar(p);
        empilhar(&aux, elem_aux);
    }
    elem_aux = desempilhar(p);
    empilhar(&aux, elem_aux);
    p = &aux;
    return 0;
}

int esvaziar(Pilha *p){
    int i=0;
    for (i=0;p->elementos[i]!= p->topo;i++){
        p->elementos[i]= '\0';
    }
    p->elementos[i+1] = '\0';
    p->topo=-1;
    return 1;
}

void desempilhanvezes(Pilha *p,int n){
    if (p->topo == -1){
        printf("Pilha vazia.\n");
        return;
    }
    int i=0;
    for (i=0;p->elementos[i]!= p->topo;i++){}
    i++;
    if (n>i){
        printf("N é maior que o tamanho da pilha.");
        return;
    }
    
    for (int i=0;i<n; i++){
        desempilhar(p);
    }
}

int pilhasiguais(Pilha *p1, Pilha *p2){
    if (tamanho(p1) != tamanho(p2)){
        printf("Pilhas diferentes.\n");
        return 0;
    }
    for (int i=0;i<tamanho(p1);i++){
        if (p1->elementos[i] != p2->elementos[i]){
            printf("Pilhas diferentes.\n");
            return 0;
            
        }
    }
    printf("Pilhas iguais.\n");
    return 1;
}

int tamanho(Pilha *p){
    int i;
    for (i=0;p->elementos[i]!='\0';i++){
    }
    return i;
}
void imprimirpilha(Pilha *p){
    for (int i=0;p->elementos[i]!='\0';i++){
        printf("%d \n",p->elementos[i]);
    }
}
