#include <stdio.h>
#include "lista.h"

int main(void) {
  ListaDE l;

  cria(&l);
    printf("EDITOR DE AUTOMATO\n");
    while(1){
        int resposta = 0;
        printf("\n");
        printf("1 – EXIBIR TRECHOS\n");
        printf("2 – EXIBIR DISTANCIA TOTAL\n");
        printf("3 – INSERIR TRECHO\n");
        printf("4 – INSERIR EM POSICAO\n");
        printf("5 – INSERIR NO INICIO\n");
        printf("6 – REMOVER TRECHO\n");
        printf("7 – ENCERRAR\n");
        printf("\nSua resposta: ");
        scanf("%d", &resposta);
        printf("\n");
        switch (resposta) {
            case 1: exibir(&l);break;
            case 2: exibedistanciatotal(&l);break;
            case 3: inserir(&l);break;
            case 4: inserirPosicao(&l);break;
            case 5: inserirInicio(&l);break;
            case 6: remover(&l);break;
            case 7:return 0; break;
            default: break;
        }
    }
  
  

  /*inserir(&l,12);
  exibir(&l);

  printf("Tamanho: %d\n", tamanho(&l));
  printf("Busca: %d\n", busca(&l,20));
  printf("Busca: %d\n", busca(&l,25));

  printf("Removendo 20...\n");
  remover(&l,20);
  exibir(&l);

  printf("Removendo 10...\n");
  remover(&l,10);
  exibir(&l);

  printf("Removendo 12...\n");
  remover(&l,12);
  exibir(&l);*/


  return 0;
}
