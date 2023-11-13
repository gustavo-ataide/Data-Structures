#include <stdio.h>
#include <string.h>

int main(void){

}


void inverte(char frase, char ifrase){
    int tam;
    tam = strlen(frase);
    for (int i=0,j=tam;i<tam;i++,j--){
        ifrase[i] = frase[j];
    }
}