#include <stdio.h>

int main() {
    // Declaração de Variáveis da Carta 01
    char Estado1;
    char Codigo_da_carta1[60];
    char Nome_da_cidade1[50];
    unsigned long int Populacao1;
    float Area_em_km1;
    float PIB1;
    int Numero_de_pontos_turisticos1;
    float Densidade_populacional1;
    float PIB_per_capita1;
    float Super_Poder1;

    // Declaração de Variáveis da Carta 02
    char Estado2;
    char Codigo_da_carta2[60];
    char Nome_da_cidade2[50];
    unsigned long int Populacao2;
    float Area_em_km2;
    float PIB2;
    int Numero_de_pontos_turisticos2;
    float Densidade_populacional2;
    float PIB_per_capita2;
    float Super_Poder2;

    // Entrada de Dados da Carta 01
    printf("Digite o Estado: \n");
    scanf(" %c", &Estado1);
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o Codigo da carta: \n");
    scanf(" %s", Codigo_da_carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", Nome_da_cidade1);

    printf("Digite a População: \n");
    scanf(" %lu", &Populacao1);

    printf("Digite a Área em km: \n");
    scanf(" %f", &Area_em_km1);

    printf("Digite o PIB (em bilhões): \n");
    scanf(" %f", &PIB1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &Numero_de_pontos_turisticos1);

    // Cálculos da Carta 01
    Densidade_populacional1 = Populacao1 / Area_em_km1;
    PIB_per_capita1 = (PIB1 * 1000000000) / Populacao1;
    Super_Poder1 = (float)Populacao1 + Area_em_km1 + PIB1 + Numero_de_pontos_turisticos1 + PIB_per_capita1 + (1 / Densidade_populacional1);

    // Entrada de Dados da Carta 02
    printf("Digite o Estado: \n");
    scanf(" %c", &Estado2);
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o Codigo da carta: \n");
    scanf(" %s", Codigo_da_carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", Nome_da_cidade2);

    printf("Digite a População: \n");
    scanf(" %lu", &Populacao2);

    printf("Digite a Área em km: \n");
    scanf(" %f", &Area_em_km2);

    printf("Digite o PIB (em bilhões): \n");
    scanf(" %f", &PIB2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &Numero_de_pontos_turisticos2);

    // Cálculos da Carta 02
    Densidade_populacional2 = Populacao2 / Area_em_km2;
    PIB_per_capita2 = (PIB2 * 1000000000) / Populacao2;
    Super_Poder2 = (float)Populacao2 + Area_em_km2 + PIB2 + Numero_de_pontos_turisticos2 + PIB_per_capita2 + (1 / Densidade_populacional2);

    // Exibição das Cartas
    printf("\n=============================\n");
    printf("...Carta 01...\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_carta1);
    printf("Cidade: %s\n", Nome_da_cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area_em_km1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", Numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);
    printf("Super Poder: %.2f\n", Super_Poder1);

    printf("\n=============================\n");
    printf("...Carta 02...\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_carta2);
    printf("Cidade: %s\n", Nome_da_cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area_em_km2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);
    printf("Super Poder: %.2f\n", Super_Poder2);

    // Comparações
    printf("\n=============================\n");
    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area_em_km1 > Area_em_km2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade_populacional1 < Densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_per_capita1 > PIB_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", Super_Poder1 > Super_Poder2);

    return 0;
}
