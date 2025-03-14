#include <stdio.h>  // Necessário para usar printf e scanf e fgets
#include <string.h> // Necessário para usar strcspn
#include <locale.h> // Necessário para usar acentuação

int main() {
    setlocale(LC_ALL, "Portuguese"); //Adicionado para aceitar acentuação

    char estado[20], estado2[20];
    char codigo[5], codigo2[5];
    char nomecida[30], nomecida2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numerosturisticos, numerosturisticos2;
    float densidade_popu, densidade_popu2;
    float pib_per_capita, pib_per_capita2;

    // Cadastro da primeira carta
    printf("***Seja bem-vindo ao SUPERTRUNFO***\n");
    printf("Aqui voce ira cadastrar as cartas para jogar\n");
    printf("Nao use virgula, use ponto para numeros\n");

    printf("Digite o nome do seu estado: "); //Solicitação de dados (estado)
    fgets(estado, sizeof(estado), stdin);    //Coleta de dados (estado)
    estado[strcspn(estado, "\n")] = '\0';    //Adicionado para remover \n da coleta

    printf("Digite o código do estado (ex: a02, b01): ");   //Solicitação de dados (codigo)
    fgets(codigo, sizeof(codigo), stdin);                   //Coleta de dados (codigo)
    codigo[strcspn(codigo, "\n")] = '\0';                   //Adicionado para remover \n da coleta, o ignorando

    printf("Digite o nome da cidade: ");
    fgets(nomecida, sizeof(nomecida), stdin);
    nomecida[strcspn(nomecida, "\n")] = '\0';

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao);                //Coleta de dados (populacao)
    getchar();                              //Adicionado para limpar o enter ou buffer

    printf("Digite a área do estado: ");
    scanf("%f", &area);
    getchar();  

    printf("Digite o pib do estado: ");
    scanf("%f", &pib);
    getchar();  

    printf("Digite o numero de pontos turísticos do estado: ");
    scanf("%d", &numerosturisticos);
    getchar();  



    // Cadastro da segunda carta (repetição do processo)
    printf("\n");
    printf("Agora os dados para a segunda carta\n");

    printf("Digite o nome do seu estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o codigo do estado (ex: a02, b01): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(nomecida2, sizeof(nomecida2), stdin);
    nomecida2[strcspn(nomecida2, "\n")] = '\0';

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao2);
    getchar();  

    printf("Digite a área do estado: ");
    scanf("%f", &area2);
    getchar();  

    printf("Digite o pib do estado: ");
    scanf("%f", &pib2);
    getchar();  

    printf("Digite o numero de pontos turísticos do estado: ");
    scanf("%d", &numerosturisticos2);
    getchar();  

    // Exibição das cartas cadastradas
    // Exibição da primeira carta
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nomecida);
    printf("População: %d\n", populacao);
    printf("Área: %.f km²\n", area);
    printf("Pib: %.f\n", pib);
    printf("Pontos turísticos: %d\n", numerosturisticos);   
    densidade_popu = (float) populacao / area;              //Cálculo da densidade populacional e conversão para float
    pib_per_capita = (float) pib / populacao;               //Cálculo do pib per capita e conversão para float
    printf("Densidade populacional: %.f\n", densidade_popu);//Exibição da densidade populacional apos calculo
    printf("Pib per capita: %.f\n", pib_per_capita);        //Exibição do pib per capita apos calculo

    // Exibição da segunda carta e repetição do processo
    printf("\nCarta 2\n");                                  //Quebra de linha para separar as cartas
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nomecida2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", numerosturisticos2);
    densidade_popu2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    printf("Densidade populacional: %.2f\n", densidade_popu2);
    printf("Pib per capita: %.2f\n", pib_per_capita2);

    return 0;
}
