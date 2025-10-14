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


    //Escolher um atributo apra comparar as duas cartas

    int opcao;

    printf("Escolha um atributo para comparar as cartas\n");
    printf("1. Nome do país\n");
    printf("2. Populacao\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade Demográfica\n");
    scanf("%d", &opcao);

    switch (opcao) {



        case 1:
        printf("Nome da Carta 1: %s / Nome da Carta 2: %s\n", nome1, nome2);
        break;

        case 2:
        printf("Populacao da Carta 1: %lu\n", populacao1);
        printf("Populacao da Carta 2: %lu\n", populacao2);
        if (populacao1 > populacao2) {
        printf("Resultado da comparacao do atributo Populacao: Carta 1(%lu) venceu\n", populacao1);
        }
        else if (populacao1 < populacao2)
        {
        printf("Resultado da comparacao do atributo Populacao: Carta 2(%lu) venceu\n", populacao2);
        }else {
        printf("Resultado da comparacao do atributo Populacao: Empate!\n"); 
        }
        break;

        case 3:
        printf("Area da Carta 1: %.2f\n", area1);
        printf("Area da Carta 2: %.2f\n", area2);
        if (area1 > area2) {
        printf("Resultado da comparacao do atributo Area: Carta 1(%.2f) venceu\n", area1);
        }
        else if (area1 < area2)
        {
        printf("Resultado da comparacao do atributo Area: Carta 2(%.2f) venceu\n", area2);
        }else {
        printf("Resultado da comparacao do atributo Area: Empate!\n"); 
        }
        break;

        case 4:
        printf("PIB da Carta 1: %.2f\n", pib1);
        printf("PIB da Carta 2: %.2f\n", pib2);
        if (pib1 > pib2) {
        printf("Resultado da comparacao do atributo PIB: Carta 1(%.2f) venceu\n", pib1);
        }
        else if (pib1 < pib2)
        {
        printf("Resultado da comparacao do atributo PIB: Carta 2(%.2f) venceu\n", pib2);
        }else {
        printf("Resultado da comparacao do atributo PIB: Empate!\n"); 
        }
        break;

        case 5:
        printf("Pontos Turisticos da Carta 1: %d\n", pontosturisticos1);
        printf("Pontos Turisticos da Carta 2: %d\n", pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2) {
        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 1(%d) venceu\n", pontosturisticos1);
        }
        else if (pontosturisticos1 < pontosturisticos2)
        {
        printf("Resultado da comparacao do atributo Pontos Turisticos: Carta 2(%d) venceu\n", pontosturisticos2);
        }else {
        printf("Resultado da comparacao do atributo Pontos Turisticos: Empate!\n"); 
        }
        break;

        case 6:
        printf("Densidade Demografica da Carta 1: %.2f\n", densidade1);
        printf("Densidade Demografica da Carta 2: %.2f\n", densidade2);
        if (densidade1 < densidade2) {
        printf("Resultado da comparacao do atributo Densidade Demografica: Carta 1(%.2f) venceu\n", densidade1);
        }
        else if (densidade1 > densidade2)
        {
        printf("Resultado da comparacao do atributo Densidade Demografica: Carta 2(%.2f) venceu\n", densidade2);
        }else {
        printf("Resultado da comparacao do atributo Densidade Demografica: Empate!\n"); 
        }
        break;




    }
    

return 0;
}
