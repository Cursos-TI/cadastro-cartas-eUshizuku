#include <stdio.h>

int main() {
    // Declaração de variáveis da Carta 1...
    char estado1[3];
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade_pop1, pib_per_capita1;

    // Declaração de variáveis da Carta 2...
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade_pop2, pib_per_capita2;

    // Entrada de dados da Carta 1...
    printf("Digite o Estado: ");
    scanf(" %s", estado1);

    printf("Digite o Código da carta: ");
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Cálculos da Carta 1...
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2...
    printf("\nDigite o Estado: ");
    scanf(" %s", estado2);

    printf("Digite o Código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a População: ");
    scanf(" %lu", &populacao2);

    printf("Digite a Área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // *** MENU DE COMPARAÇÃO ***
    int opcao;

    printf("\n==================================\n");
    printf("         MENU DE COMPARAÇÃO        \n");
    printf("==================================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Pontos Turísticos\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    switch (opcao) {

        case 1: // População...
            printf("Comparando População:\n");
            printf("Carta 1: %lu\n", populacao1);
            printf("Carta 2: %lu\n", populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área (quem tem MAIOR área vence)...
            printf("Comparando Área:\n");
            if (area1 > area2) {
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB ...
            printf("Comparando PIB:\n");
            if (pib1 > pib2) {
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Densidade populacional (quem tem MENOR vence)...
            printf("Comparando Densidade Populacional:\n");
            if (densidade_pop1 < densidade_pop2) {
                printf("Vencedora: Carta 1 (%s) — menor densidade é melhor\n", cidade1);
            } else if (densidade_pop2 < densidade_pop1) {
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // PIB per capita...
            printf("Comparando PIB per Capita:\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // Pontos turísticos...
            printf("Comparando Pontos Turísticos:\n");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
