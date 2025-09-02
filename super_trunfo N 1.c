#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe as cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           populacao1, area1, pib1, pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           populacao2, area2, pib2, pontosTuristicos2);

    // Comparação (exemplo: População)
    printf("\n=== Resultado da Comparacao (Populacao) ===\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu! (%s tem mais habitantes)\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu! (%s tem mais habitantes)\n", nomeCidade2);
    } else {
        printf("Empate! Ambas as cidades possuem a mesma populacao.\n");
    }

    return 0;
}
