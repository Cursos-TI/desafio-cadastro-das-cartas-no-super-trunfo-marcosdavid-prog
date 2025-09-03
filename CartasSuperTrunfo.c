#include <stdio.h>

int main() {
    char estado1, codigo1[4], cidade1[50];
    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1, PIB1;
    float area2, PIB2;
    int pt1, pt2;
    float ppc1, ppc2, dp1, dp2;
    //as variáveis terminadas em 1 se referem à carta 1 e as terminadas em 2, à carta 2;
    //'pt' significa 'pontos turísticos';
    //'ppc' significa 'PIB per capita;
    //'dp' significa 'densidade polulacional';

    printf("CARTA 1:\n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
    scanf("%c", &estado1);
    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);
    printf("Digite a Área da cidade em Km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &pt1);

    printf("CARTA 2:\n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite a Área da cidade em Km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &pt2);

    ppc1 = (float) (PIB1 * 1000000000) / populacao1;
    ppc2 = (float) (PIB2 * 1000000000) / populacao2;
    dp1 = (float) populacao1 / area1;
    dp2 = (float) populacao2 / area2;

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos:%i\n", pt1);
    printf("PIB per capita:%.2f reais\n", ppc1);
    printf("Densidade Populacional:%.2f hab/km²\n", dp1);

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos:%i\n", pt2);
    printf("PIB per capita:%.2f reais\n", ppc2);
    printf("Densidade Populacional:%.2f hab/km²\n", dp2);

    printf("***BATALHA DAS CARTAS***\n");

    float superpoder1, superpoder2;
    superpoder1 = (float) populacao1 + area1 + PIB1 + pt2 + dp1 + (1/ppc1);
    superpoder2 = (float) populacao2 + area2 + PIB2 + pt2 + dp2 + (1/ppc2);

    printf("A carta 1 vence a carta 2 em população? %i\n", populacao1 > populacao2);
    printf("A carta 1 vence a carta 2 em área? %i\n", area1 > area2);
    printf("A carta 1 vence a carta 2 em PIB? %i\n", PIB1 > PIB2);
    printf("A carta 1 vence a carta 2 em pontos turísticos? %i\n", pt1 > pt2);
    printf("A carta 1 vence a carta 2 em PIB per capita? %i\n", ppc1 > ppc2);
    printf("A carta 1 vence a carta 2 em densidade populacional? %i\n", dp1 < dp2);
    printf("A carta 1 vence a carta 2 em super poder? %i\n", superpoder1 > superpoder2);

    
    return 0;
}
