#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* esquerda;
    struct No* direita;
} No;

No* inserir(No* raiz, int valor) {
    if (raiz == NULL) {
        No* novoNo = (No*)malloc(sizeof(No));
        novoNo->dado = valor;
        novoNo->esquerda = NULL;
        novoNo->direita = NULL;
        return novoNo;
    } else {
        if (valor < raiz->dado) {
            raiz->esquerda = inserir(raiz->esquerda, valor);
        } else {
            raiz->direita = inserir(raiz->direita, valor);
        }
        return raiz;
    }
}

void percursoInOrdem(No* raiz) {
    if (raiz != NULL) {
        percursoInOrdem(raiz->esquerda);
        printf("%d ", raiz->dado);
        percursoInOrdem(raiz->direita);
    }
}

void percursoPreOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->dado);
        percursoPreOrdem(raiz->esquerda);
        percursoPreOrdem(raiz->direita);
    }
}

void percursoPosOrdem(No* raiz) {
    if (raiz != NULL) {
        percursoPosOrdem(raiz->esquerda);
        percursoPosOrdem(raiz->direita);
        printf("%d ", raiz->dado);
    }
}

//LINK DO SORTEIO: resulta.do/V8UQnfF0gqruV
int main() {
    No* raiz = NULL;
    raiz = inserir(raiz, 85);
    raiz = inserir(raiz, 6);
    raiz = inserir(raiz, 83);
    raiz = inserir(raiz, 45);
    raiz = inserir(raiz, 35);
    raiz = inserir(raiz, 19);
    raiz = inserir(raiz, 77);
    raiz = inserir(raiz, 34);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 25);
    raiz = inserir(raiz, 49);

    printf("Árvore Binária de Pesquisa:\n\n");
    printf("         7\n");
    printf("       /   \\\n");
    printf("     3       8\n");
    printf("   /   \\       \\\n");
    printf("  1     4       9\n");
    printf("   \\       \\     \\\n");
    printf("    2       6     10\n");
    printf("           \\\n");
    printf("            5\n");
    printf("                 \\\n");
    printf("                  11\n");

    printf("\nPercurso In-Ordem: ");
    percursoInOrdem(raiz);

    printf("\nPercurso Pré-Ordem: ");
    percursoPreOrdem(raiz);

    printf("\nPercurso Pós-Ordem: ");
    percursoPosOrdem(raiz);

    return 0;
}

