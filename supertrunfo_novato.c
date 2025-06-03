#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], cidade1[50];
    char estado2[50], cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Instrucoes iniciais 
    printf("*** Seja bem-vindo ao SUPER TRUNFO ***\n");
    printf("Aqui voce ira cadastrar as cartas para jogar.\n");
    printf("Por favor, siga estas instrucoes:\n");
    printf("- Nao use acentos.\n");
    printf("- Nao use virgula, use ponto para numeros com virgula.\n");

    // Cadastro da primeira carta  
    printf("\n--- Cadastro da Primeira Carta ---\n");
    printf("Digite o nome estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km^2): ");
    scanf("%f", &area1);
    printf("PIB (milhoes): ");
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
    scanf("%d", &populacao2);
    printf("Area (km^2): ");
    scanf("%f", &area2);
    printf("PIB (milhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibicao dos dados cadastrados
    printf("\n--- Cartas Cadastradas ---\n\n");
    
    // Exibicao da primeira carta
    printf("Carta 1 // Codigo: %.1s1\n\n", estado1);
    printf("Nome do estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos turisticos: %d\n\n", pontos_turisticos1);


    printf("-----------------------------------------------");
    // Exibicao da segunda carta
    printf("Carta 2// Codigo: %.1s2\n\n", estado2);
    printf("Nome do estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
