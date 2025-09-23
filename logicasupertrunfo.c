#include <stdio.h>

int main(){
    //declarar variáveis das cartas 1 e 2

    char estado1[30], estado2[30];
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float pib1, pib2;
    float area1, area2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float superpoder1, superpoder2;
    float densidadeinversa1, densidadeinversa2;

 //entrada de dados da carta 1

    printf("Carta 1 \n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Área: ");
    scanf("%f", &area1);


    //entrada de dados da carta 2


    printf("Carta 2 \n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Área: ");
    scanf("%f", &area2);

    //Calcular densidade populacional e PIB per capita

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpc1 = pib1 * 1000000000 / populacao1;
    pibpc2 = pib2 * 1000000000 / populacao2;

    //Calcular o Super Poder de cada carta

    densidadeinversa1 = area1 / populacao1;
    densidadeinversa2 = area2 / populacao2;

    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + (int)pibpc1 + densidadeinversa1;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + (int)pibpc2 + densidadeinversa2;

    //Exibir dados das cartas 

    printf("////////////////////////////////////////////////////////////////\n");

    printf("Resultado\n");
    printf("Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Area: %.2f km2\n", area1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpc1);
    printf("A carta 1 tem Super Poder: %.2f\n", superpoder1);

    printf("Resultado\n");
    printf("Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Area: %.2f km2\n", area2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpc2);
    printf("A carta 2 tem Super Poder: %.2f\n", superpoder2);

    //Comparacao das cartas

    int resultpop = 0, resultptur = 0, resultpib = 0, resultarea = 0, resultdens = 0, resultpibpc = 0, resultsp = 0;

    resultpop = populacao1 > populacao2;
    resultptur = pontosturisticos1 > pontosturisticos2;
    resultpib = pib1 > pib2;
    resultarea = area1 > area2;
    resultdens = densidade1 > densidade2;
    resultpibpc = pibpc1 > pibpc2;
    resultsp = superpoder1 > superpoder2;

    //Comparacao de cartas com base no atributo Super Poder

    printf("Comparacao de cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - %s: %f\n", nome1, superpoder1);
    printf("Carta 2 - %s: %f\n", nome2, superpoder2);

    if (superpoder1 > superpoder2) {
        printf("Resultado: Carta 1(%s) venceu\n", nome1);
    }else { 
        printf("Resultado: Carta 2(%s) venceu\n", nome2); 
    };

return 0;
}
