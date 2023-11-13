//#include <stdio.h>
//
//void bubblesort(int vetor[], int tamanho) {
//    int i, j, temp;
//    for (i = 0; i < tamanho - 1; i++) {
//        for (j = 0; j < tamanho - i - 1; j++) {
//            if (vetor[j] > vetor[j + 1]) {
//                temp = vetor[j];
//                vetor[j] = vetor[j + 1];
//                vetor[j + 1] = temp;
//            }
//        }
//    }
//}
//
//
//void imprimirVetor(int vetor[], int tamanho) {
//    int i;
//    for (i = 0; i < tamanho; i++) {
//        printf("%d ", vetor[i]);
//    }
//    printf("\n");
//}
//
//// link do sorteio: sorteador.com.br/r/1bn2nglABlM-a
//int main() {
//    int vetor[] = {5, 88, 73, 21, 15, 43, 90, 100};
//    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
//
//    printf("Vetor antes da ordenação:\n");
//    imprimirVetor(vetor, tamanho);
//
//    printf("Ordenação por Bolha:\n");
//    bubblesort(vetor, tamanho);
//    imprimirVetor(vetor, tamanho);
//
//
//    return 0;
//}
//
