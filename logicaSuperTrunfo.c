  #include <stdio.h>

  int main() {

printf("===Desafio Super Trunfo-===\n");


    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1 [50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float pibPerCapita1;
    float densidade1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float pibPerCapita2;
    float densidade2;
    float superPoder2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    getchar();
    scanf(" %49[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);


    // Cálculos carta 1

    // Densidade populacional = população / área
    densidade1 = populacao1 / area1;

    // PIB per capita = PIB total (convertido para reais) / população
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; //Convertendo PIB de Bilhões para Reais

    //Super Poder = soma de todos os atributos numéricos
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1); // Cálulo do Super Poder


    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Populacao: ");
    getchar();
    scanf(" %d", &populacao2);

    printf("Area (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos carta 2

    // Densidade populacional = população / área
    densidade2 = populacao2 / area2;

    // PIB per capita = PIB total (convertido para reais) / população
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;//Convertendo PIB de Bilhões para Reais

    //Super Poder = soma de todos os atributos numéricos
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2); //Cálculo do Super Poder


    // Exibição das cartas

    printf("\n===Exibindo as Cartas===\n");

    // Carta 1
    printf("\n=== Carta 1 ===\n");

    printf("Estado: %c\n", estado1);

    printf("Codigo: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nomeCidade1);

    printf("Populacao: %d\n", populacao1);

    printf("Area: %.2f km²\n", area1);

    printf("PIB: %.2f bilhoes de reais\n", pib1);

    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("PIB per Capita: %.2f reais por habitante\n", pibPerCapita1);

    printf("Super Poder: %.2f\n", superPoder1);

    // Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Estado: %c\n", estado2);

    printf("Codigo: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nomeCidade2);

    printf("Populacao: %d\n", populacao2);

    printf("Area: %.2f km²\n", area2);

    printf("PIB: %.2f bilhoes de reais\n", pib2);

    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("PIB per Capita: %.2f reais por habitante\n", pibPerCapita2);

    printf("Super Poder: %.2f\n", superPoder2);
    
// Comparação


printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
printf("Carta 1 - %s: %lu habitantes\n", nomeCidade1, populacao1);
printf("Carta 2 - %s: %lu habitantes\n", nomeCidade2, populacao2);

if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
} else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
} else {
    printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
}



    return 0;
}
