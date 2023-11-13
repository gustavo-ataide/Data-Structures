#include <stdio.h>

int vet[] = {1,2,3,4,5,6,7,8,9,10}, vet_invert[10];

int main(void){
    
    for (int i = 0, j=9 ;i<=9;i++, j--){
        vet_invert[i] = vet[j];
    }
    for (int i=0; i<10;i++){
        printf("%d %d\n", vet[i], vet_invert[i]);
    }
    
}