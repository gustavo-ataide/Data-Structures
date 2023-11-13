#include <stdio.h>
#include <string.h>

char temp[50];

struct dados {
    char nome[50];
    int idade;
    char endereco[50];
};

int main(void){
    struct dados dados;
    printf("Digite o nome: \n");fgets(dados.nome, 20);

    printf("Digite a idade: \n");scanf("%d", &dados.idade);
    printf("Digite o endereco: \n");gets(dados.endereco);
    printf("nome: %s\nIdade:%d\nEndereco: %s\n", dados.nome,dados.idade,dados.endereco);

}