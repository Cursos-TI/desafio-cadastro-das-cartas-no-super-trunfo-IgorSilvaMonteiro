#include <stdio.h>

int main() {   
    
    // variaveis
    char estado1[10], estado2[10];
    int populacao1,populacao2;
    float area1, area2;
    float bip1, bip2;
    int ponto_turistico1, ponto_turistico2;
    float densidade_populaciona, densidade_populaciona2;
    float per_capita, per_capita2;

    printf("Desafio Super Trunfo - Países\n");
    printf("CARTA 1\n");

    // carta 1 - entrada
    printf ("Digite a sigla do estado:");
    scanf ("%s", &estado1);

    printf ("população do estado:");
    scanf ("%d", &populacao1);

    printf ("area do estado:");
    scanf ("%f", &area1);

    printf ("bip do estado:");
    scanf ("%f", &bip1);

    printf ("quantida de pontos turisticos do estado:");
    scanf ("%d", &ponto_turistico1);

    // carta 2 - entrada
    printf("CARTA 2\n");

    printf ("Digite a sigla do estado:");
    scanf ("%s", &estado2);

    printf ("população do estado:");
    scanf ("%d", &populacao2);

    printf ("area do estado:");
    scanf ("%f", &area2);

    printf ("bip do estado:");
    scanf ("%f", &bip2);

    printf ("quantida de pontos turisticos do estado:");
    scanf ("%d", &ponto_turistico2);

    //carta 1 - saida
    printf ("Saida - Carta1\n");
    printf ("Estado: %s\n", estado1);
    printf ("população: %d\n", populacao1);
    printf ("area: %.2f\n", area1);
    printf ("bip: %.2f\n", bip1);
    printf ("ponto turistico: %d\n", ponto_turistico1);

     //carta 2 - saida
     printf ("Saida - Carta2\n");
     printf ("Estado: %s\n", estado2);
     printf ("população: %d\n", populacao2);
     printf ("area: %.2f\n", area2);
     printf ("bip: %.2f\n", bip2);
     printf ("ponto turistico: %d\n", ponto_turistico2);

    //nivel 2 do desafio
    printf("Medias - Carta 1\n");
    densidade_populaciona = (float) (populacao1 / area1);
    printf ("A densidade populacional é: %.2d\n", densidade_populaciona);
    per_capita = (float) (bip1 / populacao1);
    printf ("A PIB per capita é: %.2d\n", per_capita);

    printf("Medias - Carta 2\n");
    densidade_populaciona2 = (float) (populacao2 / area2);
    printf ("A densidade populacional é: %.2d\n", densidade_populaciona);
    per_capita2 = (float) (bip2 / populacao2);
    printf ("A PIB per capita é: %.2d\n", per_capita);

    //imprimir informações quem ganhou
    printf ("População carta 1 - %d - é maior que a carta 2 - %d - ?", populacao1, populacao2);
    printf (" %d ", populacao1 > populacao2);

    printf ("Bip carta 1 - %.2f - é maior que a carta 2 - %.2f - ?", bip1, bip2);
    printf (" %.1f ", bip1 > bip2);

    printf ("Estado carta 1 - %s - é maior que a carta 2 - %s - ?", estado1, estado2);
    printf (" %s ", estado1 > estado2);

     return 0;
     

}
