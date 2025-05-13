#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50], codigo1[10], nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[10], nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Variáveis de cálculo
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB(em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    
    // Cálculo de densidade e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;


    // Cálculo do Super Poder
    superPoder1 = (float )


}
