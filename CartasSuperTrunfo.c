#include <stdio.h>


int main() {
    // Variáveis para armazenar as informações
    char estado[2];
    int codigo, populacao, pontosTuristicos;
    float area, pib;
    char cidade[50];

    
    printf ("Ola, seja bem vindo!\n\n" );
    printf ("Obs: Digite sua resposta em caixa ALTA.\n");
    printf ("E se houver espacos nas respostas, por gentileza incluir _ \n");
    printf ("Ex: RIO_DE_JANEIRO.\n\n");

    // Cadastro para o Estado 1 
    printf("Cadastro do Estado 1\n");
    printf("Digite a letra que representa o estado (A-H):\n");
    scanf("%s" , &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 1
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 1
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 1
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 1
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 1
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 1
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 1
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 1
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

   // Cadastro para o Estado 2 
    printf("Cadastro do Estado 2\n");
    printf("Digite a letra que representa o estado (A-H): \n");
    scanf("%s", &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 2
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 2
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 2
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 2
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 2
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 2
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 2
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 2
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);
   
   // Cadastro para o Estado 3 
    printf("Cadastro do Estado 3\n");
    printf("Digite a letra que representa o estado (A-H): \n");
    scanf("%s", &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 3
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 3
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 3
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 3
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 3
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 3
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 3
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 3
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cadastro para o Estado 4
    printf("Cadastro do Estado 4\n");
    printf("Digite a letra que representa o estado (A-H): \n");
    scanf("%s", &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 4
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 4
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 4
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 4
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 4
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 4
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 4
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 4
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cadastro para o Estado 5
    printf("Cadastro do Estado 5\n");
    printf("Digite a letra que representa o estado (A-H): \n");
    scanf("%s", &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 5
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 5
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 5
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 5
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 5
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 5
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 5
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 5
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cadastro para o Estado 6
    printf("Cadastro do Estado 6\n");
    printf("Digite a letra que representa o estado (A-H): \n");
    scanf("%s", &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 6
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 6
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 6
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 6
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 6
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 6
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 6
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 6
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cadastro para o Estado 7
    printf("Cadastro do Estado 7\n");
    printf("Digite a letra que representa o estado (A-H): \n");
    scanf("%s", &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 7
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 7
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 7
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 7
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 7
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 7
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 7
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 7
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cadastro para o Estado 8
    printf("Cadastro do Estado 8\n");
    printf("Digite a letra que representa o estado (A-H): \n");
    scanf("%s", &estado);
    printf("Digite o código do estado (1-4):\n");
    scanf("%d", &codigo);
    printf("Digite o nome do Estado:\n");
    scanf("%s" , &estado);

    // Cidade 1 do Estado 8
    printf("\nCadastro da Cidade 1 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 1 do Estado 8
    printf("\n--- Dados da Cidade 1 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);


    // Cidade 2 do Estado 8
    printf("\nCadastro da Cidade 2 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 2 do Estado 8
    printf("\n--- Dados da Cidade 2 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    // Cidade 3 do Estado 8
    printf("\nCadastro da Cidade 3 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 3 do Estado 8
    printf("\n--- Dados da Cidade 3 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

     // Cidade 4 do Estado 8
    printf("\nCadastro da Cidade 4 do Estado %s\n", estado);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da Cidade 4 do Estado 8
    printf("\n--- Dados da Cidade 4 do Estado %s ---\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

   return 0;
}