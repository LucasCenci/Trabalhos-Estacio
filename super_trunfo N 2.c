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

    int opcao1, opcao2; // atributos escolhidos

    // ======================
    // Cadastro da Carta 1
    // ======================
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

    // ======================
    // Cadastro da Carta 2
    // ======================
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

    // ======================
    // Exibe cartas
    // ======================
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           populacao1, area1, pib1, pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           populacao2, area2, pib2, pontosTuristicos2);

    // ======================
    // Menu para escolha de dois atributos
    // ======================
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (Populacao / Area)\n");

    printf("Primeira opcao: ");
    scanf("%d", &opcao1);
    printf("Segunda opcao: ");
    scanf("%d", &opcao2);

    // ======================
    // Função auxiliar de comparação inline
    // ======================
    float valor1_op1 = (opcao1 == 1) ? populacao1 :
                       (opcao1 == 2) ? area1 :
                       (opcao1 == 3) ? pib1 :
                       (opcao1 == 4) ? pontosTuristicos1 :
                       (float)populacao1 / area1;

    float valor2_op1 = (opcao1 == 1) ? populacao2 :
                       (opcao1 == 2) ? area2 :
                       (opcao1 == 3) ? pib2 :
                       (opcao1 == 4) ? pontosTuristicos2 :
                       (float)populacao2 / area2;

    float valor1_op2 = (opcao2 == 1) ? populacao1 :
                       (opcao2 == 2) ? area1 :
                       (opcao2 == 3) ? pib1 :
                       (opcao2 == 4) ? pontosTuristicos1 :
                       (float)populacao1 / area1;

    float valor2_op2 = (opcao2 == 1) ? populacao2 :
                       (opcao2 == 2) ? area2 :
                       (opcao2 == 3) ? pib2 :
                       (opcao2 == 4) ? pontosTuristicos2 :
                       (float)populacao2 / area2;

    // ======================
    // Regras especiais: densidade populacional (menor vence)
    // ======================
    int inverso1 = (opcao1 == 5); // densidade
    int inverso2 = (opcao2 == 5);

    printf("\n=== Resultado da Comparacao ===\n");

    // Comparação principal
    int resultado = (valor1_op1 == valor2_op1) ? 0 : // empate na 1ª comparação
                    (inverso1 ? (valor1_op1 < valor2_op1 ? 1 : 2)  // densidade: menor vence
                               : (valor1_op1 > valor2_op1 ? 1 : 2));

    // Se empatou no primeiro, usa o segundo critério
    if (resultado == 0) {
        resultado = (valor1_op2 == valor2_op2) ? 0 :
                    (inverso2 ? (valor1_op2 < valor2_op2 ? 1 : 2)
                               : (valor1_op2 > valor2_op2 ? 1 : 2));
    }

    // ======================
    // Exibição do vencedor
    // ======================
    if (resultado == 1) {
        printf("Carta 1 venceu! (%s)\n", nomeCidade1);
    } else if (resultado == 2) {
        printf("Carta 2 venceu! (%s)\n", nomeCidade2);
    } else {
        printf("Empate! Nenhuma cidade venceu.\n");
    }

    return 0;
}
