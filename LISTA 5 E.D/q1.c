#include <stdio.h>

int *vetor[5], *maior,*menor, soma;


int maior_menor_soma(int *maior,int *menor,int *vetor[]){
  for (int i=0;i<5;i++){
    if (*vetor[i] <= *menor){
      *menor = *vetor[i];
    }
    else if (*vetor[i]>=*maior){
      *maior = *vetor[i];
    } 
  }
  return 0;
}

int main(void) {
  for (int i =0;i<5;i++){
    printf("digite o %d° valor: ", i);scanf("%d",&vetor[i]);
    soma += *vetor[i];
  }
  maior_menor_soma(&maior, &menor,&vetor[]);
  printf("\nmenor: %d\nmaior: %d\n", *menor, *maior);
  for (int i;i<5;i++){
    printf("vetor[%d]: %d", i, *vetor[i]);
  }
  return 0;
}
