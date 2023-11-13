#include <stdio.h>

int i, soma;

int main (void){
    for (i=0; i<500; i++) {
        if (i%3 == 0){
            soma += i;
        }
    }
    printf("%d",soma);
}