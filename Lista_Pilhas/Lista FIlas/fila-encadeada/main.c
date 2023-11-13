//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "filadin.h"
//#include "filadin.h"
//
//
//int main(void) {
//    Fila *F = malloc(sizeof(Fila));
//    cria(F);
//
//    Fila pedido;
//    cria(&pedido);
//
//    Fila pagamento;
//    cria(&pagamento);
//
//    Fila encomenda;
//    cria(&encomenda);
//
//    F = &pedido;
//
//    char *aux;
//    int resposta;
//    while (1){
//            printf("\n");
//            printf("Editor de Fila\n");
//            printf("--------------------------------\n");
//            printf("1 – INSERIR NA FILA DE PEDIDO\n");
//            printf("2 – REMOVER DA FILA DE PEDIDO\n");
//            printf("3 – REMOVER DA FILA DE PAGAMENTO\n");
//            printf("4 – REMOVER DA FILA DE ENCOMENDA\n");
//            printf("\n");
//            printf("Digite a opção: ");scanf("%d", &resposta);
//
//            switch (resposta) {
//
//                case 1:
//                    printf("Digite o nome:\n");scanf("%s",aux);
//                    entrar(&pedido, aux);break;
//                case 2:
//                    aux = sair(&pedido);
//                    entrar(&pagamento, aux);
//                    break;
//
//                case 3:
//                    aux = sair(&pagamento);
//                    entrar(&encomenda, aux);
//                    break;
//
//                case 4:
//                    aux = sair(&pagamento);
//
//
//                default:
//                    break;
//            }
//    }
//  return 0;
//}



//main.c:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filadin.h"

int main(void) {
    Fila *F = malloc(sizeof(Fila));
    cria(F);
    
    Fila pedido;
    cria(&pedido);
    
    Fila pagamento;
    cria(&pagamento);
    
    Fila encomenda;
    cria(&encomenda);
    
    char *aux = malloc(50 * sizeof(char));
    int resposta;
    while (1) {
        printf("\n");
        printf("Editor de Fila\n");
        printf("--------------------------------\n");
        printf("1 – INSERIR NA FILA DE PEDIDO\n");
        printf("2 – REMOVER DA FILA DE PEDIDO\n");
        printf("3 – REMOVER DA FILA DE PAGAMENTO\n");
        printf("4 – REMOVER DA FILA DE ENCOMENDA\n");
        printf("\n");
        printf("Digite a opção: ");
        scanf("%d", &resposta);
        
        switch (resposta) {
            case 1:
                printf("Digite o nome: ");
                scanf("%s", aux);
                entrar(&pedido, aux);
                printf("\n %s Entrou na fila de pedido\n",aux);
                break;
                
            case 2:
                strcpy(aux, sair(&pedido));
                entrar(&pagamento, aux);
                printf("\n %s Saiu da fila de pedido e foi para a de pagamento\n",aux);
                break;
                
            case 3:
                strcpy(aux, sair(&pagamento));
                entrar(&encomenda, aux);
                printf("\n %s Saiu da fila de pagamento e foi para encomenda\n",aux);
                break;
                
            case 4:
                strcpy(aux, sair(&encomenda));
                printf("\n%s Saiu da fila e foi atendido.", aux);
                break;
                
            default:
                break;
        }
    }
    return 0;
}

