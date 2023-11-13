#include "pilhaseq.h"
#include <stdio.h>

int main(void) {
    int resposta;
    Pilha p1;
    criarPilha(&p1);
    Pilha p2;
    criarPilha(&p2);
    Pilha p3;
    criarPilha(&p3);
    Pilha *P;
    P = &p1;
    while (1){
        printf("\n");
        printf("Editor de Pilha\n");
        printf("--------------------------------\n");
        printf("1 – EMPILHAR\n");
        printf("2 – DESEMPILHAR\n");
        printf("3 – ELEMENTO DO TOPO\n");
        printf("4 – IMPRIMIR PILHA\n");
        printf("5 – INVERTER ELEMENTOS DA PILHA\n");
        printf("6 – ESVAZIAR A PILHA\n");
        printf("7 – MUDAR DE PILHA\n");
        printf("8 – DESEMPILHAR N VEZES\n");
        printf("9 – COMPARAR PILHAS\n");
        printf("\n");
        printf("Digite a opção: ");scanf("%d", &resposta);
        int dado;
        int topo, selec_pilha, n;
        Pilha nump1,nump2;
        switch (resposta) {
                
            case 1:printf("Digite o dado a ser empilhado: \n");scanf("%d",&dado);
                empilhar(P, dado);
                break;
            case 2:
                desempilhar(P);
                break;
            case 3:
                topo = P->topo;
                printf("O elemento do topo é: %d\n",topo);
                break;
            case 4:
                imprimirpilha(P);
                break;
            case 5:
                inverterpilha(P);
                break;
            case 6:
                esvaziar(P);
                break;
            case 7:
                printf("Para qual pilha voce quer mudar?\n Sua resposta: ");scanf("%d",&selec_pilha);
                switch (selec_pilha) {
                    case 1:P = &p1;break;
                    case 2:P = &p2;break;
                    case 3:P = &p3;break;
                    default:
                        break;
                }
                break;
            case 8:
                printf("Digite o numero de vezes a desempilhar: \n");scanf("%d", &n);
                desempilhanvezes(P, n);
            case 9:
                printf("Digite o numero da primeira fila (1-3):\n");scanf("%d", &selec_pilha);
                switch (selec_pilha) {
                    case 1:nump1 = p1;break;
                    case 2:nump1 = p2;break;
                    case 3:nump1 = p3;break;
                    default:
                        break;
                }
                
                printf("Digite o numero da segunda fila (1-3):\n");scanf("%d", &selec_pilha);
                switch (selec_pilha) {
                    case 1:nump2 = p1;break;
                    case 2:nump2 = p2;break;
                    case 3:nump2 = p3;break;
                    default:
                        break;
                }
                pilhasiguais(&nump1, &nump2);
            default:
                break;
        }
    }
    return 0;
}


