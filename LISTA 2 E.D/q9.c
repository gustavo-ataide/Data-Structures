#include <stdio.h>

int n;

int main (void){
    printf("Digite N: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int c=1;c<=n;c++){
            printf("%d ",i);
        }
        printf("\n");
    }
}