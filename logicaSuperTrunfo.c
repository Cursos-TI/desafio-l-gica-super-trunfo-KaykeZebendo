#include <stdio.h>

int main() 
{
    printf("===Desafio Super Trunfo===\n");

    // --- Estruturas das Cartas ---

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
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
    char nomeCidade2[50];
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    // Menu Dinâmico 
    int continuar = 1;

    // Declaração de variáveis do Menu Dinâmico
    float c1a1, c2a1, c1a2, c2a2;
    int escolha1, escolha2;
    char* nomesAtributos[] = {
        "Populacao",
        "Area (km²)",
        "PIB (bilhoes)",
        "Pontos Turisticos",
        "Densidade (menor vence)"
    };
    char* nomeAttr1;
    char* nomeAttr2;

    // Inicio do Loop
    while (continuar) {
        // --- Escolha dos atributos ---
        printf("\nEscolha o primeiro atributo (1-5):\n1.Populacao 2.Area 3.PIB 4.Pontos Turísticos 5.Densidade\n");
        scanf("%d", &escolha1);

        do {
            printf("Escolha o segundo atributo (diferente do primeiro):\n1.Populacao 2.Area 3.PIB 4.Pontos Turísticos 5.Densidade\n");
            scanf("%d", &escolha2);
        } while (escolha2 == escolha1);

        // --- Mapear valores das cartas ---
        switch (escolha1) {
            case 1: c1a1 = populacao1; c2a1 = populacao2; break;
            case 2: c1a1 = area1; c2a1 = area2; break;
            case 3: c1a1 = pib1; c2a1 = pib2; break;
            case 4: c1a1 = pontosTuristicos1; c2a1 = pontosTuristicos2; break;
            case 5: c1a1 = (densidade1 > 0 ? 1.0f / densidade1 : 0.0f);
                    c2a1 = (densidade2 > 0 ? 1.0f / densidade2 : 0.0f); break;
            default: c1a1 = c2a1 = 0.0f; break;
        }

        switch (escolha2) {
            case 1: c1a2 = populacao1; c2a2 = populacao2; break;
            case 2: c1a2 = area1; c2a2 = area2; break;
            case 3: c1a2 = pib1; c2a2 = pib2; break;
            case 4: c1a2 = pontosTuristicos1; c2a2 = pontosTuristicos2; break;
            case 5: c1a2 = (densidade1 > 0 ? 1.0f / densidade1 : 0.0f);
                    c2a2 = (densidade2 > 0 ? 1.0f / densidade2 : 0.0f); break;
            default: c1a2 = c2a2 = 0.0f; break;
        }

        // --- Selecionar nomes legíveis para exibição ---
        nomeAttr1 = nomesAtributos[escolha1 - 1];
        nomeAttr2 = nomesAtributos[escolha2 - 1];

        // --- Calcular soma e mostrar resultados ---
        float somaCarta1 = c1a1 + c1a2;
        float somaCarta2 = c2a1 + c2a2;

        printf("\nComparando %s e %s:\n", nomeCidade1, nomeCidade2);
        printf("1) %s: %.2f vs %.2f\n", nomeAttr1, c1a1, c2a1);
        printf("2) %s: %.2f vs %.2f\n", nomeAttr2, c1a2, c2a2);
        printf("Soma dos atributos:\n%s: %.2f\n%s: %.2f\n", nomeCidade1, somaCarta1, nomeCidade2, somaCarta2);

        if (somaCarta1 > somaCarta2) printf("\nVENCEDOR: %s!\n", nomeCidade1);
        else if (somaCarta2 > somaCarta1) printf("\nVENCEDOR: %s!\n", nomeCidade2);
        else printf("\nRESULTADO: Empate!\n");

        // --- Pergunta se deseja continuar ---
        printf("\nDeseja comparar novamente? 1=Sim 0=Nao: ");
        scanf("%d", &continuar);

        switch (continuar) {
            case 1: printf("\nVamos comparar novamente!\n"); break;
            case 0: printf("\nEncerrando o programa. Ate mais!\n"); break;
            default: printf("\nOpcao invalida! Encerrando.\n"); continuar = 0; break;
        }
    }

    return 0;
}