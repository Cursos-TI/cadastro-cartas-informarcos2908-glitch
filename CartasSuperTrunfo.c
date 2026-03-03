#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2;            //'A' a 'H'
    char codigo1, codigo2[4];         // Ex: "A01"
    char nomeCidade1, nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

      printf("-- Cadastro de Cartas: Super Trunfo Países --\n\n");

  // Área para entrada de dados
      printf("Digite a letra do estado (A-H): ");
      scanf("%c", &estado1);

      printf("Digite o código da carta (Ex: A01): ");
      scanf(" %s", codigo1);

      //Agora estou usando %s simples, que aceita nomes como: 'saoPaulo'

      printf("Digite o nome da cidade: (Ex: saoPaulo) ");
      scanf("%s", nomeCidade1);

      printf("População: ");
      scanf("%d", &populacao1);

      printf("Área (Km2²): ");
      scanf("%f", &area1);

      printf("PIB: ");
      scanf("%f", &pib1);

      printf("Pontos Turísticos: ");
      scanf("%d", &pontosTuristicos1);

      printf("Digite a letra do estado (A-H): ");
      scanf("%c", &estado2);

      printf("Digite o código da carta (Ex: A01): ");
      scanf(" %s", codigo2);

      //Agora estou usando %s simples, que aceita nomes como: 'saoPaulo'

      printf("Digite o nome da cidade: (Ex: saoPaulo) ");
      scanf(" %s", nomeCidade2);

      printf("População: ");
      scanf("%d", &populacao2);

      printf("Área (Km2²): ");
      scanf("%f", &area2);

      printf("PIB: ");
      scanf("%f", &pib2);

      printf("Pontos Turísticos: ");
      scanf("%d", &pontosTuristicos2);


  // Área para exibição dos dados da cidade

  // -- Exibição dos dados --
      //Cadastrando Carta 1
      printf("\n*********************************\n");
      printf("Carta cadastrada com sucesso:\n");
      printf("ID: %s - Estado: %c\n", codigo1, estado1);
      printf("Cidade: %s\n", nomeCidade1);
      printf("População: %d habitantes\n", populacao1);
      printf("Área: %.2f (km2²)\n", area1);
      printf("PIB: %.2f \n", pib1);
      printf("Turismo: %d pontos\n", pontosTuristicos1);
      printf("*********************************\n");

      // -- Exibição dos dados --
      //Cadastrando Carta 2
      printf("\n*********************************\n");
      printf("Carta cadastrada com sucesso:\n");
      printf("ID: %s - Estado: %c\n", codigo2, estado2);
      printf("Cidade: %s\n", nomeCidade2);
      printf("População: %d habitantes\n", populacao2);
      printf("Área: %.2f (km2²)\n", area2);
      printf("PIB: %.2f \n", pib2);
      printf("Turismo: %d pontos\n", pontosTuristicos2);
      printf("*********************************\n");
      
      //printf("Até o momento o meu código nível iniciante está muito bom!\n");

return 0;
} 
