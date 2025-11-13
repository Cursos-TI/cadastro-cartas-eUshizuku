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

    printf("Digite o PIB: ");
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

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Comparação de um único atributo...
    // Escolha do atributo: População (pode trocar por área, PIB, densidade_pop, etc.)
    printf("\n=============================\n");
    printf("Comparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);

    // Estrutura de decisão para determinar o vencedor...
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
