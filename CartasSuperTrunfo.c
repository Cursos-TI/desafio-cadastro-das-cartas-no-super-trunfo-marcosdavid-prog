#include <stdio.h>

int main() {
    char estado1, codigo1[4], cidade1[50];
    char estado2, codigo2[4], cidade2[50];
    int populacao1;
    int populacao2;
    float area1, PIB1;
    float area2, PIB2;
    int pt1, pt2;
    //as variáveis terminadas em 1 se referem à carta 1 e as terminadas em 2, à carta 2;
    //'pt' significa 'pontos turísticos';

    printf("CARTA 1:\n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
    scanf("%c", &estado1);
    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite a população da cidade:\n");
    scanf("%i", &populacao1);
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
    scanf("%i", &populacao2);
    printf("Digite a Área da cidade em Km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &pt2);

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos:%i\n", pt1);

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos:%i\n", pt2);

    
    return 0;
}
