#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade[10];  
  char estado[2];
  char codigo[3];
  int população, pontos;
  float area, pib;

  // Área para entrada de dados
  printf("Digite a cidade: ");
  scanf("%s", &cidade);

  printf("Digite o estado(UF): ");
  scanf("%s", &estado);

  printf("Digite o código: ");
  scanf("%s", &codigo);

  printf("Digite a população: ");
  scanf("%i", &população);
  
  printf("Digite o pib: ");
  scanf("%f", &pib);
  
  printf("Digite a área territorial: ");
  scanf("%f", &area);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%i", &pontos);


  // Área para exibição dos dados da cidade
  printf("cidade: %s\n", cidade);

  printf("estado: %s\n", estado);

  printf("código: %s\n", codigo);

  printf("população: %i\n", população);

  printf("pib: %.2f\n", pib);

  printf("área: %.2f\n", area);

  printf("pontos: %i\n", pontos);
  

return 0;
} 