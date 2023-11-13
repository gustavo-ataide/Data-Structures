#include <stdio.h>
#include <math.h>
 
int a, b, c;
float delta, x1,x2;

int main(void){
    printf("Digite o valor de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = (b*b) - (4*a*c);
    if (delta>0){
        x1 = (-b+sqrt(delta))/ (2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf("x1=%.2f\nx2=%.2f\n", x1,x2);
    }
    else if (delta<0) {
            printf("Raizes Imaginarias!");
        }
        else if (delta == 0) {
                x1 = x2 = -b/ (2*a);
                printf("x1=%.2f\nx2=%.2f\n", x1,x2);
            }
    }