#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contar_vogais(char *linha) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; j < strlen(linha); j++) {
        char letra = tolower(linha[j]);
        switch (letra) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }

    printf("a : ");
    for (int j = 0; j < a; j++) {
        printf("*");
    }
    printf(" (%d)\n", a);

    printf("e : ");
    for (int j = 0; j < e; j++) {
        printf("*");
    }
    printf(" (%d)\n", e);

    printf("i : ");
    for (int j = 0; j < i; j++) {
        printf("*");
    }
    printf(" (%d)\n", i);

    printf("o : ");
    for (int j = 0; j < o; j++) {
        printf("*");
    }
    printf(" (%d)\n", o);

    printf("u : ");
    for (int j = 0; j < u; j++) {
        printf("*");
    }
    printf(" (%d)\n", u);
}

int main() {
    char linha[100];
    printf("Digite uma linha de texto: ");
    fgets(linha, sizeof(linha), stdin);
    contar_vogais(linha);
    return 0;
}
