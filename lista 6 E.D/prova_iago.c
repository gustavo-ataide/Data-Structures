#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Aluno {
    char Nome[31];
    char CPF[12];
    int idade;
    int qtd_disciplinas;
    float *notas;
};


struct Aluno* criarAluno(char nome[], char cpf[], int idade, int qtd_disciplinas) {
    struct Aluno *aluno = (struct Aluno*) malloc(sizeof(struct Aluno));
    if (aluno == NULL) {
        printf("Erro ao alocar memória para aluno\n");
        return NULL;
    }

    strncpy(aluno->Nome, nome, 30);
    aluno->Nome[30] = '\0';
    strncpy(aluno->CPF, cpf, 11);
    aluno->CPF[11] = '\0';
    aluno->idade = idade;
    aluno->qtd_disciplinas = qtd_disciplinas;

    aluno->notas = (float*) malloc(qtd_disciplinas * sizeof(float));
    if (aluno->notas == NULL) {
        printf("Erro ao alocar memória para notas do aluno\n");
        free(aluno);
        return NULL;
    }

    return aluno;
}


void atribuirNota(struct Aluno *aluno, int indice, float nota) {
    if (indice >= 0 && indice < aluno->qtd_disciplinas && nota >= 0 && nota <= 100) {
        aluno->notas[indice] = nota;
    } else {
        printf("Índice inválido ou nota fora do intervalo [0, 100]\n");
    }
}


float calcularMediaGeral(struct Aluno *aluno) {
    float soma = 0;
    for (int i = 0; i < aluno->qtd_disciplinas; i++) {
        soma += aluno->notas[i];
    }
    return soma / aluno->qtd_disciplinas;
}


void desalocarAluno(struct Aluno *aluno) {
    free(aluno->notas);
    free(aluno);
}

int main() {
    
    struct Aluno *aluno1 = criarAluno("João da Silva", "12345678901", 20, 3);
    if (aluno1 != NULL) {
        atribuirNota(aluno1, 0, 8.5);
        atribuirNota(aluno1, 1, 7.0);
        atribuirNota(aluno1, 2, 9.5);
        printf("Média geral do aluno1: %.2f\n", calcularMediaGeral(aluno1));
        desalocarAluno(aluno1);
    }

    return 0;
}