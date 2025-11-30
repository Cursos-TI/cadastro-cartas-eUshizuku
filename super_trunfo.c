#include <stdio.h>

// ===================================================
// Função para retornar o valor de um atributo da carta
// ===================================================
float getAtributo(
    int atributo, int carta,
    unsigned long int populacao1, unsigned long int populacao2,
    float area1, float area2,
    float pib1, float pib2,
    float dens1, float dens2,
    float ppc1, float ppc2,
    int pontos1, int pontos2
) {
    switch (atributo) {
        case 1: return carta == 1 ? populacao1 : populacao2;
        case 2: return carta == 1 ? area1 : area2;
        case 3: return carta == 1 ? pib1 : pib2;
        case 4: return carta == 1 ? dens1 : dens2;
        case 5: return carta == 1 ? ppc1 : ppc2;
        case 6: return carta == 1 ? pontos1 : pontos2;
    }
    return 0;
}

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

    // Entrada de dados ------------------------------
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

    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2
    printf("\nDigite o Estado: ");
    scanf(" %s", estado2);

    printf("Digite o Código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // -------------------------
    // ESCOLHA DE 2 ATRIBUTOS
    // -------------------------
    int atributo1, atributo2;

    printf("\n=========================================\n");
    printf("     MENU - ESCOLHA O 1º ATRIBUTO        \n");
    printf("=========================================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (MENOR vence)\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Pontos Turísticos\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 6) {
        printf("Opção inválida!\n");
        return 0;
    }

    // MENU DINÂMICO PARA O 2º ATRIBUTO
    printf("\n=========================================\n");
    printf("     MENU - ESCOLHA O 2º ATRIBUTO        \n");
    printf("=========================================\n");

    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue;

        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Densidade Populacional\n"); break;
            case 5: printf("5 - PIB per Capita\n"); break;
            case 6: printf("6 - Pontos Turísticos\n"); break;
        }
    }

    printf("Escolha: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6) {
        printf("Opção inválida!\n");
        return 0;
    }

    // Busca dos valores
    float c1_attr1 = getAtributo(atributo1, 1,
        populacao1, populacao2, area1, area2, pib1, pib2,
        densidade_pop1, densidade_pop2,
        pib_per_capita1, pib_per_capita2,
        pontos_turisticos1, pontos_turisticos2
    );

    float c2_attr1 = getAtributo(atributo1, 2,
        populacao1, populacao2, area1, area2, pib1, pib2,
        densidade_pop1, densidade_pop2,
        pib_per_capita1, pib_per_capita2,
        pontos_turisticos1, pontos_turisticos2
    );

    float c1_attr2 = getAtributo(atributo2, 1,
        populacao1, populacao2, area1, area2, pib1, pib2,
        densidade_pop1, densidade_pop2,
        pib_per_capita1, pib_per_capita2,
        pontos_turisticos1, pontos_turisticos2
    );

    float c2_attr2 = getAtributo(atributo2, 2,
        populacao1, populacao2, area1, area2, pib1, pib2,
        densidade_pop1, densidade_pop2,
        pib_per_capita1, pib_per_capita2,
        pontos_turisticos1, pontos_turisticos2
    );

    // Comparação
    int r1 = (atributo1 == 4)
             ? (c1_attr1 < c2_attr1 ? 1 : (c2_attr1 < c1_attr1 ? 2 : 0))
             : (c1_attr1 > c2_attr1 ? 1 : (c2_attr1 > c1_attr1 ? 2 : 0));

    int r2 = (atributo2 == 4)
             ? (c1_attr2 < c2_attr2 ? 1 : (c2_attr2 < c1_attr2 ? 2 : 0))
             : (c1_attr2 > c2_attr2 ? 1 : (c2_attr2 > c1_attr2 ? 2 : 0));

    float soma1 = c1_attr1 + c1_attr2;
    float soma2 = c2_attr1 + c2_attr2;

    int vencedor =
        (soma1 > soma2 ? 1 :
        (soma2 > soma1 ? 2 : 0));

    // Resultado Final
    printf("\n=========================================\n");
    printf("            RESULTADO FINAL\n");
    printf("=========================================\n");

    printf("\nCidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n\n", cidade2);

    printf("Atributo %d: %.2f  |  %.2f\n", atributo1, c1_attr1, c2_attr1);
    printf("Atributo %d: %.2f  |  %.2f\n", atributo2, c1_attr2, c2_attr2);

    printf("\nSoma dos Atributos:\n");
    printf("%s = %.2f\n", cidade1, soma1);
    printf("%s = %.2f\n", cidade2, soma2);

    printf("\n===== VENCEDOR =====\n");

    if (vencedor == 1)
        printf("Carta 1 (%s) venceu!\n", cidade1);
    else if (vencedor == 2)
        printf("Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}