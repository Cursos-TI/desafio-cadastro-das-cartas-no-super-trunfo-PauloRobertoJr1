#include <stdio.h>

int main()
{
    //Variaveis para a primeira carta
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
   

    //Variaveis para a segunda carta
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    //PRIMEIRA CARTA
    printf("Cadastro da Carta 1\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade(Apenas uma palavra): ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //SEGUNDA CARTA
    printf("Cadastro da Carta 2\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade(Apenas uma palavra): ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n--------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);



    return 0;
}
