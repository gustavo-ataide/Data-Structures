#include <stdio.h>
#define MAX 100

struct lista{
    int elementos[MAX];
    int tam;
};

void exibir(struct lista Lista){
    int conta_tamanho;
    for (int i =0;Lista.elementos[i]!='\0';i++){
        conta_tamanho++;
    }
    printf("tamanho: %d", conta_tamanho);

    for(int i=0; i<conta_tamanho-1; i++){
        printf("%d\n",Lista.elementos[i]);
    }
}

// void esvaziar(struct lista *Lista){

// }



int main(void){
    struct lista Lista;
    Lista.elementos[0] = 1;
    while (1){
        int resposta = 0;
        printf("1 – Exibir Lista \n2 – Inserir\n3 – Remover \n4 – Exibir elemento\n5 – Exibir posição\n6 – Esvaziar Lista\n7 – Inserir na posição\n8 – Sair\nResposta: \n");
        scanf("%d", &resposta);
        switch (resposta){
        case 1:exibir(Lista); break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;
        case 8: break;
        }
    };
    
    return 0;
}

