#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], cidade1[50];
    char estado2[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float superpoder1, superpoder2;
    
    // Instrucoes iniciais 
    printf("*** Seja bem-vindo ao SUPER TRUNFO ***\n");
    printf("Aqui voce ira cadastrar as cartas para jogar.\n");
    printf("Por favor, siga estas instrucoes:\n");
    printf("- Nao use acentos.\n");
    printf("- Use ponto (.) para separar a parte decimal dos numeros.\n");
    
    // Cadastro da primeira carta  
    printf("\n--- Cadastro da Primeira Carta ---\n");
    printf("Digite o nome estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da segunda carta  
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Digite o nome estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Calculo dos novos atributos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pib_per_capita1 = pib1 / (float)populacao1;
    pib_per_capita2 = pib2 / (float)populacao2;
    
    // Calculo do Super Poder:
    // Super Poder = populacao + area + PIB + pontos turisticos + PIB per capita + (1/densidade)
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);
    
    // Exibicao dos dados cadastrados
    printf("\n--- Cartas Cadastradas ---\n\n");
    
    // Exibicao da Carta 1
    printf("Carta 1 // Codigo: %.1s1\n\n", estado1);
    printf("Nome do estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f kilometros quadrados\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes por kilometros quadrados\n", densidade1);
    printf("PIB per capita: %.2f milhoes por habitante\n", pib_per_capita1);
    printf("Super Poder: %.2f\n\n", superpoder1);
    
    printf("-----------------------------------------------\n\n");
    
    // Exibicao da Carta 2
    printf("Carta 2 // Codigo: %.1s2\n\n", estado2);
    printf("Nome do estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f kilometros quadrados\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes por kilometros quadrados\n", densidade2);
    printf("PIB per capita: %.2f milhoes por habitante\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", superpoder2);
    
    // Comparacao de atributos usando os comparadores 
    printf("--- Comparacao de Atributos ---\n");
    printf("Se o resultado for 1 entao a carta 1 vence e for 0 entao a carta 2 vence, \n\n");
    
    // Populacao (maior vence)
    printf("Comparacao de Populacao: %d\n", populacao1 > populacao2);
    
    // Area (maior vence)
    printf("Comparacao de Area: %d\n", area1 > area2);
    
    // PIB (maior vence)
    printf("Comparacao de PIB: %d\n", pib1 > pib2);
        
    // Pontos turisticos (maior vence)
    printf("Comparacao de Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    
    // Densidade Populacional (menor vence)
    printf("Comparacao de Densidade Populacional: %d\n", densidade1 < densidade2);
    
    // PIB per capita (maior vence)
    printf("Comparacao de PIB per capita: %d\n", pib_per_capita1 > pib_per_capita2);
    
    // Super Poder (maior vence)
    printf("Comparacao de Super Poder: %d\n", superpoder1 > superpoder2);
    
    return 0;
}
