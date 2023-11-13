//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct No {
//    int dado;
//    struct No* esquerda;
//    struct No* direita;
//} No;
//
//No* criarNo(int valor) {
//    No* novoNo = (No*)malloc(sizeof(No));
//    novoNo->dado = valor;
//    novoNo->esquerda = NULL;
//    novoNo->direita = NULL;
//    return novoNo;
//}
//
//No* inserir(No* raiz, int valor) {
//    if (raiz == NULL) {
//        return criarNo(valor);
//    }
//
//    if (valor < raiz->dado) {
//        raiz->esquerda = inserir(raiz->esquerda, valor);
//    } else if (valor > raiz->dado) {
//        raiz->direita = inserir(raiz->direita, valor);
//    }
//
//    return raiz;
//}
//
//No* buscaBinaria(No* raiz, int chave) {
//    if (raiz == NULL || raiz->dado == chave) {
//        return raiz;
//    }
//
//    if (chave < raiz->dado) {
//        return buscaBinaria(raiz->esquerda, chave);
//    }
//
//    return buscaBinaria(raiz->direita, chave);
//}
//
//void exibirArvore(No* raiz) {
//    if (raiz != NULL) {
//        exibirArvore(raiz->esquerda);
//        printf("%d ", raiz->dado);
//        exibirArvore(raiz->direita);
//    }
//}
//
////link do sorteio: resulta.do/E_od7yYXLvztY
//int main() {
//    No* raiz = NULL;
//    No* resultado = NULL;
//
//    // Inserção dos elementos na árvore
//    raiz = inserir(raiz, 7);
//    raiz = inserir(raiz, 9);
//    raiz = inserir(raiz, 18);
//    raiz = inserir(raiz, 30);
//    raiz = inserir(raiz, 40);
//    raiz = inserir(raiz, 49);
//    raiz = inserir(raiz, 52);
//    raiz = inserir(raiz, 56);
//    raiz = inserir(raiz, 58);
//    raiz = inserir(raiz, 60);
//    raiz = inserir(raiz, 81);
//    raiz = inserir(raiz, 88);
//    raiz = inserir(raiz, 90);
//    raiz = inserir(raiz, 92);
//    raiz = inserir(raiz, 100);
//    
//
//    printf("Árvore Binária de Pesquisa:\n");
//    exibirArvore(raiz);
//    printf("\n\n");
//
//    int chave = 7;
//    resultado = buscaBinaria(raiz, chave);
//
//    if (resultado != NULL) {
//        printf("A chave %d foi encontrada na árvore.\n", chave);
//    } else {
//        printf("A chave %d não foi encontrada na árvore.\n", chave);
//    }
//
//    return 0;
//}
