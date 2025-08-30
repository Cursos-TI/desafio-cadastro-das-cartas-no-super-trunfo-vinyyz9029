#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Desafio - Vinicius Matheus Rodrigues.

int main(){
   
    //criação das cartas do jogo super trunfo
    
    /*Criação das variáveis, sendo elas: 
    Estado: Letra de 'A' a 'H' representando 8 estados
    Cod. Carta: Letra do estado seguida de um número de 01 a 04
    Nome cidade
    População
    Área (km2)
    PIB
    n. pontos turísticos
*/
    
    char estado1, nome1[30], estado2, nome2[30];
    int n_pontoTuri1, codCarta1, populacao1, n_pontoTuri2, codCarta2, populacao2;
    float area1, pib1, area2, pib2;
    
       printf("**Montagem das cartas**\n");
   
    //Criação da primeira carta (Carta 1)
    printf("\n****Insira os dados para a Carta 1: \n");
    
    //Variável estado.
    printf("\nDigite o Estado (Letras entre 'A' e 'H'): ");
    scanf("%c", &estado1);
    
    //Variável Código da Carta.
    printf("Digite o código da carta %c (01 A 04): ", estado1);
    scanf(" %d", &codCarta1);
    
    //Variável Nome da cidade.
    printf("Digite o nome da cidade desejada: ");
    scanf(" %s", &nome1);
    
    //Variável População
    printf("Digite a população da cidade escolhida: ");
    scanf(" %d", &populacao1);
    
    //Variável Área
    printf("Digite a área da cidade escolhida: ");
    scanf("%f", &area1);
    
    //Variável PIB
    printf("Digite o PIB da cidade escolhida: ");
    scanf(" %f", &pib1);
    
    //Variável Pontos turísticos
    printf("Digite a quantidade de Pontos Túristicos: ");
    scanf(" %d", &n_pontoTuri1);
    
    
    //Impressão carta
    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo da Carta: %c0%d", estado1, codCarta1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2fkm²", area1);
    printf("\nPIB: %.2f", pib1); 
    printf("\nPontos turísticos: %d", n_pontoTuri1);
    
    //Criação da segunda carta (Carta 2)
    printf("\n\n****Insira os dados para a Carta 2: \n");
    
    //Variável estado.
    printf("\nDigite o Estado (Letras entre 'A' e 'H'): ");
    scanf(" %c", &estado2);
    
    //Variável Código da Carta.
    printf("Digite o código da carta %c (01 A 04): ", estado2);
    scanf(" %d", &codCarta2);
    
    //Variável Nome da cidade.
    printf("Digite o nome da cidade desejada: ");
    scanf(" %s", &nome2);
    
    //Variável População
    printf("Digite a população da cidade escolhida: ");
    scanf(" %d", &populacao2);
    
    //Variável Área
    printf("Digite a área da cidade escolhida: ");
    scanf("%f", &area2);
    
    //Variável PIB
    printf("Digite o PIB da cidade escolhida: ");
    scanf(" %f", &pib2);
    
    //Variável Pontos turísticos
    printf("Digite a quantidade de Pontos Túristicos: ");
    scanf("%d", &n_pontoTuri2);
    
    //Impressão carta
    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo da Carta: %c0%d", estado2, codCarta2);
    printf("\nNome da Cidade: %s", nome2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2fkm²", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos turísticos: %d\n\n", n_pontoTuri2);
   
    return 0;
}