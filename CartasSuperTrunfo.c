#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
     //=========Carta 1=========

   char estado[4];
   printf("Digite o Estado: ");
   scanf("%s", estado);

   char codigoCarta[20];
   printf("Digite o código da carta: ");
   scanf("%s", codigoCarta);

   char cidade[20];
   printf("Digite a cidade: ");
   scanf("%s", cidade);

   int populacao;
   printf("Digite a população: ");
   scanf("%d", &populacao);

   double area;
   printf("Digite a área da cidade: ");
   scanf("%lf", &area);

   double PIB;
   printf("Digite o PIB da cidade: ");
   scanf("%lf", &PIB);

   int pontoTuristico;
   printf("Digite o total de pontos turísticos: ");
   scanf("%d", &pontoTuristico);

   double densidadePopulacional = populacao / area;
   double PIBperCapita = (PIB*1000000000) /(double)populacao;

    //=========Carta 2=========

   char estado2[4];
   printf("Digite o Estado 2: ");
   scanf("%s", estado2);

   char codigoCarta2[20];
   printf("Digite o código da carta 2: ");
   scanf("%s", codigoCarta2);

   char cidade2[20];
   printf("Digite a cidade 2: ");
   scanf("%s", cidade2);

   int populacao2;
   printf("Digite a população 2: ");
   scanf("%d", &populacao2);

   double area2;
   printf("Digite a área da cidade 2: ");
   scanf("%lf", &area2);

   double PIB2;
   printf("Digite o PIB da cidade 2: ");
   scanf("%lf", &PIB2);

   int pontoTuristico2;
   printf("Digite o total de pontos turísticos 2: ");
   scanf("%d", &pontoTuristico2);

   double densidadePopulacional2 = populacao2 / area2;
   double PIBperCapita2 = (PIB2*1000000000)/(double) populacao2;

   printf("\nCarta 1\n");
   printf("Estado: %s \n", estado);
   printf("Código: %s \n", codigoCarta);
   printf("Nome da Cidade: %s \n", cidade);
   printf("População: %d \n", populacao);
   printf("Área: %.2f km² \n", area);
   printf("PIB: %.2f bilhões de reais\n", PIB);
   printf("Número de Pontos Turísticos: %d \n", pontoTuristico);
   printf("Densidade Populacional: %.2f\n", densidadePopulacional);
   printf("PIB per Capita: %.2f\n", PIBperCapita);

   printf("\nCarta 2\n");
   printf("Estado: %s \n", estado2);
   printf("Código: %s \n", codigoCarta2);
   printf("Nome da Cidade: %s \n", cidade2);
   printf("População: %d \n", populacao2);
   printf("Área: %.2f km² \n", area2);
   printf("PIB: %.2f bilhões de reais\n", PIB2);
   printf("Número de Pontos Turísticos: %d \n", pontoTuristico2);
   printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
   printf("PIB per Capita: %.2f \n", PIBperCapita2);

return 0;
} 
