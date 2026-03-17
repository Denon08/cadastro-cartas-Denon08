#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char cidade1[20], cidade2[20];
  char estado1[3], estado2[3];
  char codigo1[4], codigo2[4];
  int pontos1, pontos2;
  int população1, população2;
  float pib1, pib2;
  float area1, area2;

  // Área para entrada de dados
  printf("Carta 1:\n");
  printf("\n");

  printf("Digite a cidade: "); //porteiras
  scanf("%s", &cidade1);

  printf("Digite o estado: "); //CE
  scanf("%s", &estado1);

  printf("Digite o código: "); //C01
  scanf("%s", &codigo1);

  printf("Digite a população: "); //17050
  scanf("%i", &população1);
  
  printf("Digite o pib: "); //13631.56
  scanf("%f", &pib1);
  
  printf("Digite a área territorial: "); //224.86
  scanf("%f", &area1);

  printf("Digite a quantidade de pontos turísticos: "); //10
  scanf("%i", &pontos1);
  printf("\n");

  //Carta 2

  printf("Carta 2:\n");
  printf("\n");

  printf("Digite a cidade: "); //Brejo Santo
  scanf("%s", &cidade2);

  printf("Digite o estado: "); //CE
  scanf("%s", &estado2);

  printf("Digite o código: "); //C02
  scanf("%s", &codigo2);

  printf("Digite a população: "); //51090
  scanf("%i", &população2);
  
  printf("Digite o pib: "); //24737.96
  scanf("%f", &pib2);
  
  printf("Digite a área territorial: "); //654.658
  scanf("%f", &area2);

  printf("Digite a quantidade de pontos turísticos: "); //10
  scanf("%i", &pontos2);
  printf("\n");


  // Área para exibição dos dados da cidade
  //Carta 1

  printf("Carta 1:\n");
  printf("\n");

  printf("cidade: %s\n", cidade1);

  printf("estado: %s\n", estado1);

  printf("código: %s\n", codigo1);

  printf("população: %i\n", população1);

  printf("pib: %.2f\n Reais", pib1);

  printf("área: %.2f\n KM²", area1);

  printf("pontos: %i\n", pontos1);
  printf("\n");
  
  //Carta 2

  printf("Carta 2:\n");
  printf("\n");

  printf("cidade: %s\n", cidade2);

  printf("estado: %s\n", estado2);

  printf("código: %s\n", codigo2);

  printf("população: %i\n", população2);

  printf("pib: %.2f\n Reais", pib2);

  printf("área: %.2f\n KM²", area2);

  printf("pontos: %i\n", pontos2);

return 0;
} 