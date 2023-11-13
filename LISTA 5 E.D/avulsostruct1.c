#include <stdio.h>


struct horario{
    int horas;
    int minuto;
    int segundo;
};

int main (void){
    struct horario hora;
    printf("Digite as horas:\n"); scanf("%d", &hora.horas);
    printf("Digite os minutos:\n"); scanf("%d", &hora.minuto);
    printf("Digite os segundos:\n"); scanf("%d", &hora.segundo);
    printf("%d:%d:%d", hora.horas,hora.minuto,hora.segundo);
}

