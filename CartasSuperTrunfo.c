#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    
    //carta1
    char estado1, cod1[6], cidade1[60];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidade1, pibcapita1, superpoder1;

    //carta2
    char estado2, cod2[6], cidade2[60];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2, pibcapita2, superpoder2;

    //cadastro da carta 1
    printf("\nCadastro da carta 1 \n");
    printf("Digite o nome do estado da carta 1: \n");
    scanf("%c", &estado1);
    printf("Digite o código da carta 1: \n");
    scanf("%s", &cod1);
    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", &cidade1);
    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade da carta 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontosturisticos1);

    //cadastro da carta 2
    printf("\nCadastro da carta 2 \n");
    printf("Digite o nome do estado da carta 2: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2: \n");
    scanf("%s", &cod2);
    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", &cidade2);
    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade da carta 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontosturisticos2);

    //Exibição das cartas cadastradas

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", cod1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
    densidade1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    pibcapita1 = (pib1 * 100000000)/ populacao1;
    printf("PIB per Capita: %.2f reais \n", pibcapita1);
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibcapita1 + densidade1;

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", cod2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    pibcapita2 = (pib2 * 100000000)/ populacao2;
    printf("PIB per Capita: %.2f reais \n", pibcapita2);
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibcapita2 + densidade2;

    //Batalha das cartas

    printf("\n Batalha das cartas!! \n");
    printf("População: Carta 1 venceu:(%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu:(%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu:(%d)\n", pib1 > pib2);
    printf("Pontos Turístico: Carta 1 venceu:(%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade: Carta 1 venceu:(%d)\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta 1 venceu:(%d)\n", pibcapita1 > pibcapita2);
    printf("Super Poder: Carta 1 venceu:(%d)\n", superpoder1 > superpoder2);

    // Uso de If else para definir a carta vencedora

    if(populacao1 > populacao2){
        printf("Carta 1 - %s venceu!! População: %d\n",cidade1,populacao1);
    } else {
        printf("Carta 2 - %s venceu!! População: %d\n",cidade2,populacao2);
    }

    if(area1 > area2){
        printf("Carta 1 - %s venceu!! Área: %.2f Km² \n",cidade1,area1);
    } else {
        printf("Carta 2 - %s venceu!! Área: %.2f Km² \n",cidade2,area2);
    }

    if(pib1 > pib2){
        printf("Carta 1 - %s venceu!! PIB: %.2f Bilhões de reais \n",cidade1,pib1);
    } else {
        printf("Carta 2 - %s venceu!! PIB: %.2f Bilhões de reais \n",cidade2,pib2);
    }

    return 0;

}
