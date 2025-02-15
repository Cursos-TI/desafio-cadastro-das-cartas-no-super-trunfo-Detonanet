
/*
Desafio Super Trunfo - Paísed
Desenvolvedor: Rafael R. Correa
Tema 1: Cadastro de cartas
Novato: Cada país e dividido em oito estado identificado pela letra A ate H e cada estado tera quatro cidade numeradas de 1 a 4, a combinação ficara A01..A04 etc.

*/
#include <stdio.h>

int main()
{
    // Estrutura para armazenar os dados
    char pais[50]; // Removi a inicialização com "" (não necessária)
    char estado[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int cidade = 4;
    int populacao;
    float area;
    float pib;
    int ponto_turistico;

    int numeral = 1; // usado para numerar a cidade

    // Loop para cada cidade
    for (size_t i = 0; i < cidade; i++)
    {
        printf("Qual o nome do País? "); 
        scanf("%s", &pais);  

        printf("Para este País %s, o nome do estado é %c e a cidade 0%d\n", pais, estado[i], numeral);

        printf("Qual o tamanho da população nesta cidade? ");
        scanf("%d", &populacao); 

        printf("Qual o tamanho do metro quadrado desta cidade? ");
        scanf("%f", &area); 

        printf("Qual PIB desta cidade? ");
        scanf("%f", &pib);

        printf("Quantos pontos turísticos tem nesta cidade? ");
        scanf("%d", &ponto_turistico); 

        // Exibição dos dados coletados
        printf("\n---------- Descrição da Carta ----------\n");
        printf("País: %s\n", pais);
        printf("Código: %c0%d\n", estado[i], numeral);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f m²\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", ponto_turistico);
        printf("------------------------------------------\n\n");

        numeral++; // Incrementa o número da cidade
    }

    printf("Processo finalizado.\n");
    return 0;
}
