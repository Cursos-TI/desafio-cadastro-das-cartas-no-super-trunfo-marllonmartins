#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, ppc1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, ppc2;

    // Leitura carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    pib1 *= 10000000;
    densidade1 = (populacao1 / area1);
    ppc1 = (pib1 / populacao1);
    pib1 /= 10000000;
    ppc1 *= 100;

    // Leitura carta 2
    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    pib2 *= 10000000;
    densidade2 = (float) (populacao2 / area2);
    ppc2 = (float) (pib2 / populacao2);
    pib2 /= 10000000;
    ppc2 *= 100;

    // Exibindo os dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", ppc1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", ppc2);

    return 0;
}