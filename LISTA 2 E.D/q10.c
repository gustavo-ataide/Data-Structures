#include <stdio.h>

int ano, mais_novo=0, cont=0;
float vel=0, maior_vel = 0, soma_vel=0, vel_media=0;
char resp;

int main(void){
    printf("Quer continuar?\n");
    scanf(" %c", &resp);
    while ((resp!= 'n') && (resp!= 'N')){
        printf("Digite o ano do carro: \n");
        scanf("%d", &ano);
        printf("Digite a velocidade do carro: \n");
        scanf("%f", &vel);

        soma_vel += vel;
        cont+=1;

        if (vel>maior_vel){
            maior_vel = vel;
        }
        if (ano>mais_novo){
            mais_novo = ano;
        }
        printf("Quer continuar?\n");
        scanf(" %c", &resp);
        
    }
    vel_media = soma_vel / cont;
    printf("\n%.2f\n %d\n %.2f", maior_vel, mais_novo, vel_media);
}