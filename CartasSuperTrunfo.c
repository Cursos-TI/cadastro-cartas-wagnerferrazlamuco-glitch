#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
          //variaveis da primenra carta  
    char estado1[20];
    char CodigoCarta1[10];
    char NomeCidade1[30];
    int Populacao1;
    float Area1;
    float PIB1;
    int NTuristico1;

           //variaveis da segunda carta 
    char estado2[20];
    char CodigoCarta2[10];
    char NomeCidade2[30];
    int Populacao2;
    float Area2;
    float PIB2;
    int NTuristico2;          

   

  // Área para entrada de dados
     // entrada dos dados da primera carta.
    printf ("Digite os dados da primera carta \n");
    printf ("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo carta: \n");
    scanf("%s", &CodigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &NomeCidade1);

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
    scanf("%s", &NomeCidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turistico: \n");
    scanf("%d", &NTuristico2);

  // Área para exibição dos dados da cidade
    printf("CARTA 1:\n");
    
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", CodigoCarta1);
    printf("Nome da cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f KM2 \n", Area1);
    printf("PIB: %.2f Bilhoes de Reais \n", PIB1);
    printf("Numero de pontos turistico: %d\n", NTuristico1);

    printf("CARTA 2\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", CodigoCarta2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f KM2 \n", Area2);
    printf("PIB: %.2f Bilhoes de Reais \n", PIB2);
    printf("Numero de pontos turistico: %d\n", NTuristico2);
    
return 0;
} 
