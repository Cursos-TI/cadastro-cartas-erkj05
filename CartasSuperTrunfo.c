#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[20], estado2[20];
  char codigo[10], codigo2[10];
  char nome[20], nome2[20];

  int populacao, populacao2;
  int pontos_turisticos, pontos_turisticos2;
  float pib, pib2;
  float area, area2;
  float pib_percapta, pib_percapta2;
  float densidade_pop, densidade_pop2;

  // Área para entrada de dados
  printf("\n=== CARTA 1 ===\n");

  printf("Qual o estado?\n");
  scanf("%s", estado);

  printf("Qual o codigo?\n");
  scanf("%s", codigo);

  printf("Qual o nome da cidade?\n");
  scanf("%s", nome);

  printf("Qual a populacao?\n");
  scanf("%d", &populacao);

  printf("Numero de pontos turisticos?\n");
  scanf("%d", &pontos_turisticos);

  printf("Qual o PIB?\n");
  scanf("%f", &pib);

  printf("Qual a area?\n");
  scanf("%f", &area);

  densidade_pop = (float)populacao/area;
  pib_percapta =(float) pib/populacao;

  printf("\n=== CARTA 2 ===\n");

  printf("Qual o estado?\n");
  scanf("%s", estado2);

  printf("Qual o codigo?\n");
  scanf("%s", codigo2);

  printf("Qual o nome da cidade?\n");
  scanf("%s", nome2);

  printf("Qual a populacao?\n");
  scanf("%d", &populacao2);

  printf("Numero de pontos turisticos?\n");
  scanf("%d", &pontos_turisticos2);

  printf("Qual o PIB?\n");
  scanf("%f", &pib2);

  printf("Qual a area?\n");
  scanf("%f", &area2);

  densidade_pop2 = (float)populacao2/area2;
  pib2 = (float)pib2/populacao2;

  // Área para exibição dos dados da cidade
  printf("\n--- DADOS DAS CARTAS ---\n");

  printf("\nCARTA 1\n");
  printf("Estado: %s\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", nome);
  printf("Populacao: %d\n", populacao);
  printf("Pontos turisticos: %d\n", pontos_turisticos);
  printf("PIB: %.2f\n", pib);
  printf("Area: %.2f\n", area);
  printf("densidade populacional: %f\n" ,densidade_pop);
  printf("PIB per capta: %f\n" ,pib_percapta);

  printf("\nCARTA 2\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", nome2);
  printf("Populacao: %d\n", populacao2);
  printf("Pontos turisticos: %d\n", pontos_turisticos2);
  printf("PIB: %.2f\n", pib2);
  printf("Area: %.2f\n", area2);
  printf("densidade populacional: %f\n" ,densidade_pop2);
  printf("PIB per capta: %f\n" ,pib_percapta2);

  return 0;
}
