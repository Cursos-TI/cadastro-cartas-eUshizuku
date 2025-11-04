#include <stdio.h>

int main() {

    // Declaração de Variáveis da Carta 01...

    char Estado1;
    char Codigo_da_carta1[60];
    char Nome_da_cidade1[50];
    int Populacao1;
    float Area_em_km1;
    float PIB1;
    int Numero_de_pontos_turisticos1;
    float Densidade_populacional1;
    float PIB_per_capita1;

    // ...Declaração de Variáveis da Carta 02...

    char Estado2;
    char Codigo_da_carta2[60];
    char Nome_da_cidade2[50];
    int Populacao2;
    float Area_em_km2;
    float PIB2;
    int Numero_de_pontos_turisticos2;
    float Densidade_populacional2;
    float PIB_per_capita2;

    // ...Entrada de Dados da Carta 01...

    printf("Digite o Estado: \n");
    scanf(" %c", &Estado1);

    // ...Limpa o buffer do teclado após ler o caractere...
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o Codigo da carta: \n");
    scanf(" %s", Codigo_da_carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", Nome_da_cidade1);

    printf("Digite a População: \n");
    scanf(" %d", &Populacao1);

    printf("Digite a Área em km: \n");
    scanf(" %f", &Area_em_km1);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &Numero_de_pontos_turisticos1);

    //...Cálculos da Carta 01...
    Densidade_populacional1 = Populacao1 / Area_em_km1;
    PIB_per_capita1 = (PIB1 * 1000000000) / Populacao1; //...Convertendo PIB de bilhões para reais...


    // ...Entrada de Dados da Carta 02...

printf("Digite o Estado2: \n");
    scanf(" %c", &Estado2);

    // ...Limpa o buffer do teclado após ler o caractere...
    
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o Codigo da carta2: \n");
    scanf(" %s", Codigo_da_carta2);
 
    printf("Digite o Nome da Cidade2: \n");
    scanf(" %s", Nome_da_cidade2);

    printf("Digite a População2: \n");
    scanf(" %d", &Populacao2);

    printf("Digite a Área em km2: \n");
    scanf(" %f", &Area_em_km2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &Numero_de_pontos_turisticos2);

    


    //...Cálculos da Carta 02...

    Densidade_populacional2 = Populacao2 / Area_em_km2;
    PIB_per_capita2 = (PIB2 * 1000000000) / Populacao2; //...Convertendo PIB de bilhões para reais...

    // ...Exibição da Carta 01...

    printf("\n=============================\n");
    printf("...Carta 01...\n");
    printf("Estado 01: %c\n", Estado1);
    printf("Código da Carta 01: %s\n", Codigo_da_carta1);
    printf("Nome da Cidade 01: %s\n", Nome_da_cidade1);
    printf("Populaçao da Cidade 01: %d\n", Populacao1);
    printf("Área em KM da Cidade 01: %f\n", Area_em_km1);
    printf("PIB da Cidade 01: %f\n", PIB1);
    printf("Pontos Turísticos da Cidade 01: %d\n", Numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);

    // ...Exibição da Carta 02...

    printf("\n=============================\n");
    printf("...Carta 02...\n");
    printf("Estado 02: %c\n", Estado2);
    printf("Código da Carta 02: %s\n", Codigo_da_carta2);
    printf("Nome da Cidade 02: %s\n", Nome_da_cidade2);
    printf("Populaçao da Cidade 02: %d\n", Populacao2);
    printf("Área em KM da Cidade 02: %f\n", Area_em_km2);
    printf("PIB da Cidade 02: %f\n", PIB2);
    printf("Pontos Turísticos da Cidade 02: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);


    return 0;
}

