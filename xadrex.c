#include <stdio.h>

int main(void) {
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    int casas_bispo = 5;
    int contador_bispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha
    // Move 8 casas para a esquerda
    int casas_rainha = 8;
    int contador_rainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);

    return 0;
}
