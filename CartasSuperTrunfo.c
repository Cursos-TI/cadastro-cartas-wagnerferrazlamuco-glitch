#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
          //variaveis da CARTA 1  
    char estado1[20];
    char CodigoCarta1[10];
    char NomeCidade1[30];
    unsigned int Populacao1;
    float Area1;
    float PIB1;
    int NTuristico1;
    float DensidadePopulacional1;
    float pibPerCapita1;
    int SuPoder1;

           //variaveis da CARTA 2 
    char estado2[20];
    char CodigoCarta2[10];
    char NomeCidade2[30];
    int Populacao2;
    float Area2;
    float PIB2;
    int NTuristico2;
    float DensidadePopulacional2;
    float pibPerCapita2;
    int SuPoder2;

   

  // Área para entrada de dados
     // entrada dos dados da primera carta.
    printf ("Digite os dados da primera carta \n");

    printf ("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo carta: \n");
    scanf("%s", &CodigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", &NomeCidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite a area: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turistico: \n");
    scanf("%d", &NTuristico1);
    

    // entrada de dados da segunda carta.
    printf("Digite os dados da segunda carta \n");
    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo carta: \n");
    scanf("%s", &CodigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", &NomeCidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turistico: \n");
    scanf("%d", &NTuristico2);

  // Área para cálculos das propriedades derivadas

    DensidadePopulacional1 = Populacao1 / Area1; // calculo da densidade populacional da primeira cidade card1
    pibPerCapita1 = PIB1 / Populacao1; // calculo do pib per capita da primeira cidade card1
    SuPoder1 = Populacao1 + Area1 + PIB1 + NTuristico1 + (1.0f / DensidadePopulacional1);// calculo do super poder da primeira cidade card1

    DensidadePopulacional2 = Populacao2 / Area2; // calculo da densidade populacional da primeira cidade card2
    pibPerCapita2 = PIB2 / Populacao2; // calculo do pib per capita da primeira cidade card1
    SuPoder2 = Populacao2 + Area2 + PIB2 + NTuristico2 + (1.0f / DensidadePopulacional2);// calculo do super poder da primeira cidade card1


//COMPARACAO DAS CARTAS
    printf("COMPARACAO DAS CARTAS:\n");
    printf("----------------------\n");
    printf("POPULACAO: carta 1 venceu  %d\n", Populacao1 > Populacao2);
    printf("AREA: carta 1 venceu  %d\n", Area1 > Area2);
    printf("PIB: carta 1 venceu  %d\n", PIB1 > PIB2);
    printf("PONTOS TURISTICOS: carta 1 venceu  %d\n", NTuristico1 > NTuristico2);
    printf("DENSIDADE POPULACIONAL: carta 1 venceu  %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB PER CAPITO: carta 1 venceu  %d\n", pibPerCapita1 > pibPerCapita2);
    printf("SUPER PODER: carta 1 venceu  %d\n", SuPoder1 > SuPoder2);
      

        // Área para exibição dos dados da cidade
    printf("CARTA 1:\n");
    
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", CodigoCarta1);
    printf("Nome da cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f KM2 \n", Area1);
    printf("PIB: %.2f Bilhoes de Reais \n", PIB1);
    printf("Numero de pontos turistico: %d\n", NTuristico1);
    printf("Densidade Populacional: %.2f habitantes por KM2 \n", DensidadePopulacional1);
    printf("PIB per capita: %.2f Reais \n", pibPerCapita1);
    printf("O SuPoder1 é: %d\n", SuPoder1);

    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", CodigoCarta2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f KM2 \n", Area2);
    printf("PIB: %.2f Bilhoes de Reais \n", PIB2);
    printf("Numero de pontos turistico: %d\n", NTuristico2);
    printf("Densidade Populacional: %.2f habitantes por KM2 \n", DensidadePopulacional2);
    printf("PIB per capita: %.2f Reais \n", pibPerCapita2);
    printf("O SuPoder2 é: %d\n", SuPoder2);
return 0;
} 
