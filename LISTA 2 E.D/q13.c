#include <stdio.h>

int numerador=1, denominador=1;

int main(void) {
    for (numerador=1, denominador=1; numerador<=99 && denominador<=50; numerador+=2, denominador++){
        printf("%d/%d\n",numerador,denominador);
    }
}