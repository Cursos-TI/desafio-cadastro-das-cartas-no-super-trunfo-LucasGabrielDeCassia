#include <stdio.h>

int main() {
    char estado[20], estado2[20];
    char codigo[5], codigo2[5];
    char nomecida[30], nomecida2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numerosturisticos, numerosturisticos2;

    // Cadastro da primeira carta
    printf("Vamos comecar o desafio do supertrunfo\n");
    
    // Coleta de informações do usuário
    printf("Digite o nome do seu estado:");
    scanf("%s", estado);
    while (getchar() != '\n'); // Para ler qualquer coisa ate que o usuario pressione enter, para evitar que o proximo scanf seja pulado.
    printf("Digite o codigo do estado(ex:a02,b01):");
    scanf("%4s", codigo);
    while (getchar() != '\n');
    printf("Digite o nome do cidade:");
    scanf("%s", nomecida);
    while (getchar() != '\n');
    printf("Digite a populacao do estado:");
    scanf("%d", &populacao); /* Nao tive o mesmo problema de pular, por isso nao usei o (getchar) acredito que
     seja por causa do tipo de dado, parece que o espaco em branco ou segunda palavra do nome da cidade
     ou estado estava sendo lido no proximo scanf.*/                       
    printf("Digite a area do estado:");
    scanf("%f", &area);
    printf("Digite o pib do estado:");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos do estado:");
    scanf("%d", &numerosturisticos);

    // Cadastro da segunda carta, Copia do primeiro cadastro
    printf("Agora os dados para o segunda carta\n");
    // Coleta de informações do usuário
    printf("Digite o nome do seu estado:");
    scanf("%s", estado2);
    while (getchar() != '\n');
    printf("Digite o codigo do estado(ex:a02,b01):");
    scanf("%4s", codigo2);
    while (getchar() != '\n');
    printf("Digite o nome do cidade:");
    scanf("%s", nomecida2);
    while (getchar() != '\n');
    printf("Digite a populacao do estado:");
    scanf("%d", &populacao2);
    printf("Digite a area do estado:");
    scanf("%f", &area2);
    printf("Digite o pib do estado:");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos do estado:");
    scanf("%d", &numerosturisticos2);

    // Exibição das cartas cadastradas
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nomecida);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km²\n", area);
    printf("Pib: %f\n", pib);
    printf("Pontos turisticos: %d\n\n", numerosturisticos);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nomecida2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Pontos turisticos: %d\n", numerosturisticos2);
    
    return 0;
}
