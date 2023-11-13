#include <stdio.h>

int tam=0;

int soma_impar(int lista[]){
    int soma = 0;
    for(int i=0; lista[i]!='\0';i++){
        if (lista[i]%2 != 0){
            soma+= lista[i];
        }
    }
    printf("Soma das notas ímpares: %d\n",soma);
    return soma;
}

float media_par (int lista[]){
    int quant_pares=0,soma_pares=0;
    float media_pares=0;
    for(int i=0; lista[i]!='\0';i++){
        if (lista[i]%2 ==0){
            quant_pares++;
            soma_pares += lista[i];
        }
    }
    media_pares = soma_pares/quant_pares;
    printf("media das notas pares: %f\n", media_pares);
    return media_pares;
}

int soma_medias (int lista[]){
    int cont_passou=0;
    for(int i=0; lista[i]!='\0';i++){
        if(lista[i]>=7){
            cont_passou++;
        }
    }
    printf("%d pessoas passaram\n", cont_passou);
    return cont_passou;
}

int main(void){
    printf("Quantas notas voce quer adicionar? ");scanf("%d",&tam);
    int vetor[tam];
    for (int i=0; i<tam;i++){
        printf("Digite a %d nota: ", i+1);scanf("%d", &vetor[i]);
    }
    int si, sm;
    float mp;
    si = soma_impar(vetor);
    mp = media_par(vetor);
    sm = soma_medias(vetor);



    return 0;
}