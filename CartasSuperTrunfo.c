// Inclua a biblioteca para manipulação de strings
#include <stdio.h>
#include <string.h>

int main() {

    // variaveis
    char estado1[10], estado2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidade_populacional, densidade_populacional2;
    float per_capita, per_capita2;

    // carta 1 - entrada
    printf("Desafio Super Trunfo - Países\n");
    printf("CARTA 1\n");

    printf("Digite a sigla do estado: ");
    scanf("%s", estado1);

    printf("População do estado: ");
    scanf("%d", &populacao1);

    printf("Área do estado: ");
    scanf("%f", &area1);

    printf("PIB do estado: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos do estado: ");
    scanf("%d", &ponto_turistico1);

    // carta 2 - entrada
    printf("CARTA 2\n");

    printf("Digite a sigla do estado: ");
    scanf("%s", estado2);

    printf("População do estado: ");
    scanf("%d", &populacao2);

    printf("Área do estado: ");
    scanf("%f", &area2);

    printf("PIB do estado: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos do estado: ");
    scanf("%d", &ponto_turistico2);

    //carta 1 - saida
    printf("Saída - Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);

    //carta 2 - saida
    printf("Saída - Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);

    //nivel 2 do desafio
    printf("Médias - Carta 1\n");
    densidade_populacional = (float) populacao1 / area1;
    printf("A densidade populacional é: %.2f\n", densidade_populacional);
    per_capita = pib1 / (float) populacao1;
    printf("O PIB per capita é: %.2f\n", per_capita);

    printf("Médias - Carta 2\n");
    densidade_populacional2 = (float) populacao2 / area2;
    printf("A densidade populacional é: %.2f\n", densidade_populacional2);
    per_capita2 = pib2 / (float) populacao2;
    printf("O PIB per capita é: %.2f\n", per_capita2);
    
    //imprimir informações quem ganhou
    printf("População carta 1 - %d - é maior que a carta 2 - %d? ", populacao1, populacao2);
    printf("%d\n", populacao1 > populacao2);

    printf("PIB carta 1 - %.2f - é maior que a carta 2 - %.2f? ", pib1, pib2);
    printf("%d\n", pib1 > pib2);

    int estado_maior = strcmp(estado1, estado2) > 0;
    printf("Estado carta 1 - %s - é maior que a carta 2 - %s? %d\n", estado1, estado2, estado_maior);

    return 0;
}
