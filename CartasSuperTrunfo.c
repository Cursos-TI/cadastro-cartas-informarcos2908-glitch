#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;            //'A' a 'H'
    char codigo1[4];         // Ex: "A01"
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

      printf("-- Cadastro de Cartas: Super Trunfo Países --\n\n");

  // Área para entrada de dados
      printf("Digite a letra do estado (A-H): ");
      scanf("%c", &estado1);

      printf("Digite o código da carta (Ex: A01): ");
      scanf("%s", codigo1);

      //Agora estou usando %s simples, que aceita nomes como: 'saoPaulo'

      printf("Digite o nome da cidade: (Ex: saoPaulo) ");
      scanf("%s", nomeCidade1);

      printf("População: ");
      scanf("%d", &populacao1);

      printf("Área (Km^2): ");
      scanf("%f", &area1);

      printf("PIB: ");
      scanf("%f", &pib1);

      printf("Pontos Turísticos: ");
      scanf("%d", &pontosTuristicos1);


  // Área para exibição dos dados da cidade

  // -- Exibição dos dados --
      printf("\n*********************************\n");
      printf("Carta cadastrada com sucesso:\n");
      printf("ID: %s - Estado: %c\n", codigo1, estado1);
      printf("Cidade: %s\n", nomeCidade1);
      printf("População: %d habitantes\n", populacao1);
      printf("Área: %.2f (km^2)\n", area1);
      printf("PIB: %.2f \n", pib1);
      printf("Turismo: %d pontos\n", pontosTuristicos1);
      printf("*********************************\n");
      
      printf("Até o momento o meu código nível iniciante está muito bom!\n");

return 0;
} 
