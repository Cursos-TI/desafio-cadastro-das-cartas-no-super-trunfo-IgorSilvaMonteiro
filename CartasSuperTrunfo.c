#include <stdio.h>

int main() {   

    char estado1[10], estado2[10];
    int população1, população2;
    float area1, area2;
    float bip1, bip2;
    int ponto_turistico1, ponto_turistico2;

    printf("Desafio Super Trunfo - Países");

    // carta 1 - entrada
    printf ("Digite a sigla do estado:");
    scanf ("%s", &estado1);

    printf ("população do estado:");
    scanf ("%d", &população1);

    printf ("area do estado:");
    scanf ("%f", &area1);

    printf ("bip do estado:");
    scanf ("%f", &bip1);

    printf ("quantida de pontos turisticos do estado:");
    scanf ("%d", &ponto_turistico1);

    // carta 2 - entrada
    printf ("Digite a sigla do estado:");
    scanf ("%s", &estado2);

    printf ("população do estado:");
    scanf ("%d", &população2);

    printf ("area do estado:");
    scanf ("%f", &area2);

    printf ("bip do estado:");
    scanf ("%f", &bip2);

    printf ("quantida de pontos turisticos do estado:");
    scanf ("%d", &ponto_turistico2);

    //carta 1 - saida
    printf ("Carta1\n");
    printf ("Estado: %s\n", estado1);
    printf ("população: %d\n", população1);
    printf ("area: %f\n", area1);
    printf ("bip: %f\n", bip1);
    printf ("ponto turistico: %s\n", ponto_turistico1);

     //carta 2 - saida
     printf ("Carta2\n");
     printf ("Estado: %s\n", estado2);
     printf ("população: %d\n", população2);
     printf ("area: %f\n", area2);
     printf ("bip: %f\n", bip2);
     printf ("ponto turistico: %s\n", ponto_turistico2);

     return 0;
     

}
