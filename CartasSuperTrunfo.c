#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
#include <stdio.h>
int main() {
    char estado1[20];
    char CodigoCarta1[10];
    char NomeCidade1[30];
    int Populacao1;
    float Area1;
    float PIB1;
    int NTuristico1;

   

  // Área para entrada de dados
    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo carta: \n");
    scanf("%s", &CodigoCarta');

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


  // Área para exibição dos dados da cidade
    printf("CARTA 1");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", CodigoCarta1);
    printf("Nome da cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f KM2 \n", Area1);
    printf("PIB: %.2f R$ \n", PIB1);
    printf("Numero de pontos turistico: %d\n", NTuristico1);
    
return 0;
} 
