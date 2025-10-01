#include <stdio.h>

int main() {

    printf("===Desafio Super Trunfo-===\n");

    // --- Estruturas das Cartas ---

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

    // --- Cadastro e Cálculos ---

    // Cadastro da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Populacao: ");
    getchar();
    scanf("%lu", &populacao1); // Usar %lu para unsigned long int

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

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
    scanf("%lu", &populacao2); // Usar %lu para unsigned long int

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // --- Exibição das Cartas ---

    printf("\n\n=== EXIBINDO AS CARTAS CADASTRADAS ===\n");

    // Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s-%c\n", nomeCidade1, estado1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s-%c\n", nomeCidade2, estado2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    

    // --- Menu interativo e comparação ---

    int escolha;

    printf("\n\n=== HORA DA BATALHA! ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Demografica (vence o MENOR valor)\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\n--- Comparando por: Populacao ---\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("VENCEDOR: %s!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("VENCEDOR: %s!\n", nomeCidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        case 2:
            printf("\n--- Comparando por: Area ---\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("VENCEDOR: %s!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("VENCEDOR: %s!\n", nomeCidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;
            
        case 3:
            printf("\n--- Comparando por: PIB ---\n");
            printf("%s: R$ %.2f bilhoes\n", nomeCidade1, pib1);
            printf("%s: R$ %.2f bilhoes\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("VENCEDOR: %s!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("VENCEDOR: %s!\n", nomeCidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        case 4:
            printf("\n--- Comparando por: Pontos Turisticos ---\n");
            printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("VENCEDOR: %s!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("VENCEDOR: %s!\n", nomeCidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;
    
        
        case 5:
            printf("\n--- Comparando por: Densidade Demografica (Vence o MENOR) ---\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) { // Regra invertida: vence quem tem a menor densidade
                printf("VENCEDOR: %s!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("VENCEDOR: %s!\n", nomeCidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        default:
            printf("\nOpcao invalida! Por favor, execute o programa novamente e escolha um numero entre 1 e 5.\n");
            break;
    }



    return 0;
}