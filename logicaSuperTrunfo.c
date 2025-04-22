#include <stdio.h>

int main() {
    // Variáveis para armazenar informações da Carta 1 e Carta 2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    // Exibição das informações iniciais do jogo
    printf("**** Super Trunfo ****\n");

    printf("---- Insira as informações da Carta 1 ----\n");

    // Entrada de dados para a Carta 1
    printf("Informe o estado (letra entre 'A' e 'H' representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (letra do estado seguida de um número de 01 a 04, ex.: A01, B03): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe o tamanho da população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico1);

    printf("---- Insira as informações da Carta 2 ----\n");

    // Entrada de dados para a Carta 2
    printf("Informe o estado (letra entre 'A' e 'H' representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (letra do estado seguida de um número de 01 a 04, ex.: A01, B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Informe o tamanho da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turistico2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Exibe as informações da carta 1
    printf("Informações da Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    // Exibe as informações da carta 2
    printf("Informações da Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // Comparação de cartas
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    int escolha;
    scanf("%d", &escolha);

    printf("\nResultado da comparação:\n");

    if (escolha == 1) {
        if (populacao1 > populacao2)
            printf("Carta 1 venceu pela maior população.\n");
        else if (populacao2 > populacao1)
            printf("Carta 2 venceu pela maior população.\n");
        else
            printf("Empate em população.\n");
    } else if (escolha == 2) {
        if (area1 > area2)
            printf("Carta 1 venceu pela maior área.\n");
        else if (area2 > area1)
            printf("Carta 2 venceu pela maior área.\n");
        else
            printf("Empate em área.\n");
    } else if (escolha == 3) {
        if (pib1 > pib2)
            printf("Carta 1 venceu pelo maior PIB.\n");
        else if (pib2 > pib1)
            printf("Carta 2 venceu pelo maior PIB.\n");
        else
            printf("Empate em PIB.\n");
    } else if (escolha == 4) {
        if (turistico1 > turistico2)
            printf("Carta 1 venceu por ter mais pontos turísticos.\n");
        else if (turistico2 > turistico1)
            printf("Carta 2 venceu por ter mais pontos turísticos.\n");
        else
            printf("Empate em pontos turísticos.\n");
    } else if (escolha == 5) {
        if (densidade1 < densidade2)
            printf("Carta 1 venceu pela menor densidade populacional.\n");
        else if (densidade2 < densidade1)
            printf("Carta 2 venceu pela menor densidade populacional.\n");
        else
            printf("Empate em densidade populacional.\n");
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
