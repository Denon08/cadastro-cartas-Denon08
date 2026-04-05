#include <stdio.h>

// Desafio Super Trunfo

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char cidade1[20], cidade2[20];
  char estado1[3], estado2[3];
  char codigo1[4], codigo2[4];
  int pontos1, pontos2;
  unsigned int população1, população2;
  float pib1, pib2, pibpercapita1, densidemo1, pibpercapita2, densidemo2;
  float area1, area2;
  float  SuperPoder1, SuperPoder2;


  // Área para entrada de dados
    //Carta 1
      printf("Carta 1:\n");
      printf("\n");

      printf("Digite a cidade: "); //porteiras
      scanf("%s", &cidade1);

      printf("Digite o estado(UF): "); //CE
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

      printf("Digite o estado(UF): "); //CE
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

      //Operações 
      pibpercapita1 = pib1 / população1;
      pibpercapita2 = pib2 / população2;

      densidemo1 = população1 / area1;
      densidemo2 = população2 / area2;


  // Área para exibição dos dados da cidade
    //Carta 1

      printf("Carta 1:\n");
      printf("\n");

      printf("cidade: %s\n", cidade1);

      printf("estado: %s\n", estado1);

      printf("código: %s\n", codigo1);

      printf("população: %i\n", população1);

      printf("pib: %.2f Reais\n", pib1);

      printf("área: %.2f KM²\n", area1);

      printf("densidade demográfica: %.2f HAB/KM²\n", densidemo1);

      printf("PIB per capita: %.2f Reais\n", pibpercapita1);

      printf("pontos: %i\n", pontos1);

      //super poder
      SuperPoder1 = (float) população1 + pib1 + pontos1 + pibpercapita1 + (1 / densidemo1);

      printf("Super poder da carta 1: %.5f", SuperPoder1);

      printf("\n");
  
    //Carta 2

      printf("Carta 2:\n");
      printf("\n");

      printf("cidade: %s\n", cidade2);

      printf("estado: %s\n", estado2);

      printf("código: %s\n", codigo2);

      printf("população: %i\n", população2);

      printf("pib: %.2f Reais\n", pib2);

      printf("área: %.2f KM²\n", area2);

      printf("densidade demográfica: %.2f HAB/KM²\n", densidemo2);

      printf("PIB per capita: %.2f Reais\n", pibpercapita2);

      printf("pontos: %i\n", pontos2);

      //super poder carta 2
      SuperPoder2 = (float) população2 + pib2 + pontos2 + pibpercapita2 + (1 / densidemo2);

      printf("Super poder da carta 2: %.5f", SuperPoder2);
      printf("\n\n");

//comparação de cartas

int atributo1, atributo2, resultado1, resultado2;

    printf("***Comparação de atributos***\n\n");
    printf("1. População \n2. Área \n3. PIB \n4. Densidade demográfica \n5. PIB per capita \n6. Pontos turísticos \n7. Super poder \n");

  printf("1° atributo a comparar: ");   
    scanf("%i", &atributo1);
  //Atributo 1
    switch (atributo1)
    {
    case 1:
      printf("Você escolheu o atributo 'População'\n");
      resultado1 = população1 > população2 ? 1 : 0;
      break;
    case 2:
      printf("Você escolheu o atributo 'Área'\n");
      resultado1 = area1 > area2 ? 1 : 0;
      break;
    case 3:
      printf("Você escolheu o atributo 'PIB'\n");
      resultado1 = pib1 > pib2 ? 1 : 0;
      break;
    case 4:
      printf("Você escolheu o atributo 'Densidade demográfica'\n");
      resultado1 = densidemo1 < densidemo2 ? 1 : 0;
      break;
    case 5:
      printf("Você escolheu o atributo 'PIB per capita'\n");
      resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
      break;
    case 6:
      printf("Você escolheu o atributo 'Pontos turísticos'\n");
      resultado1 = pontos1 > pontos2 ? 1 : 0;
      break;
    case 7:
      printf("Você escolheu o atributo 'SuperPoder'\n");
      resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;
      break;
    
    default: 
      printf("Opção inválida!");
      break;
    }
  
    
  //Atributo 2
  printf("2° atributo a comparar: ");   
    scanf("%i", &atributo2);

      if (atributo1 == atributo2)
      {
        printf("Os atributos são iguais. Tente novamente!");
    } 
      else { 
      switch (atributo2)
    {
    case 1:
      printf("Você escolheu o atributo 'População'\n");
      resultado2 = população1 > população2 ? 1 : 0;
      break;
    case 2:
      printf("Você escolheu o atributo 'Área'\n");
      resultado2 = area1 > area2 ? 1 : 0;
      break;
    case 3:
      printf("Você escolheu o atributo 'PIB'\n");
      resultado2 = pib1 > pib2 ? 1 : 0;
      break;
    case 4:
      printf("Você escolheu o atributo 'Densidade demográfica'\n");
      resultado2 = densidemo1 < densidemo2 ? 1 : 0;
      break;
    case 5:
      printf("Você escolheu o atributo 'PIB per capita'\n");
      resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
      break;
    case 6:
      printf("Você escolheu o atributo 'Pontos turísticos'\n");
      resultado2 = pontos1 > pontos2 ? 1 : 0;
      break;
    case 7:
      printf("Você escolheu o atributo 'SuperPoder'\n");
      resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;
      break;
    
    default: 
      printf("Opção inválida!");
      break;
    }
    }

  //Resultado das comparações
    printf("Carta 1: %s X Carta 2: %s\n", cidade1, cidade2);
    printf("Os atributos escolhidos foram: %i e %i\n", atributo1, atributo2);

  if (resultado1 == 1 && resultado2 == 1)
  {
    printf("Carta 1 venceu!!!\n");
  } 
  else if (resultado1 == 0 && resultado2 == 0)
  {
    printf("Carta 2 venceu!!!\n");
  } else
  {
    printf("Houve empate!");
  }
  
return 0;
} 
