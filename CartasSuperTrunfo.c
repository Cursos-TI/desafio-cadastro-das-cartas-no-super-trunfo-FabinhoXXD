#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //--nivel novato

    //primeira cidade
    char estado;
    int cidade;
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristico;
    float densidadePop;
    float pibPerCapita;
    float densidadeInvertida;
    float superPoder;
    
    //segunda cidade
    char estado2;
    int cidade2;
    int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristico2;
    float densidadePop2;
    float pibPerCapita2;
    float densidadeInvertida2;
    float superPoder2;
    

    printf("Olá! Vamos iniciar o nosso game Super Trunfo!!\n");

    //-- COLETAR OS DADOS DA PRIMEIRA CARTA
    printf("-- Cadastre a primeira cidade!! -- \n");
    printf("Digite a baixo uma letra de A a H para simular um identificador de um estado\n");
    scanf("%c", &estado);
    printf("Qual o numero da cidade? de 1 a 4\n");
    scanf("%i", &cidade);
    printf("Qual a população desta cidade? Ex: (3500) Habitantes\n");
    scanf("%i", &populacao);
    printf("Qual a area desta cidade? Ex: (35.00) Km²\n");
    scanf("%f", &area);
    printf("Qual o PIB desta cidade? Ex (800000.00) Mil\n");
    scanf("%f", &pib);
    printf("Quantos pontos turísticos tem esta cidade?\n");
    scanf("%i", &numeroPontosTuristico);
    
    //CALCULOS DA PRIMEIRA CARTA
    densidadePop = populacao / area;
    densidadeInvertida = area / populacao;
    pibPerCapita = pib / populacao;
    superPoder = (int)populacao + (float)area + (float)pib + (int)numeroPontosTuristico + (float)pibPerCapita + (float)densidadeInvertida;


    //-- COLETAR OS DADOS DA SEGUNDA CARTA
    printf("-- Cadastre a segunda cidade!! -- \n");
    printf("Digite a baixo uma letra de A a H para simular um identificador de um estado\n");
    scanf(" %c", &estado2);
    printf("Qual o numero da cidade? de 1 a 4\n");
    scanf("%i", &cidade2);
    printf("Qual a população desta cidade? Ex: (3500) Habitantes\n");
    scanf("%i", &populacao2);
    printf("Qual a area desta cidade? Ex: (35.00) Km²\n");
    scanf("%f", &area2);
    printf("Qual o PIB desta cidade? Ex (800000.00) Mil\n");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos tem esta cidade?\n");
    scanf("%i", &numeroPontosTuristico2);

    //CALCULOS DA SEGUNDA CARTA
    densidadePop2 = populacao2 / area2;
    densidadeInvertida2 = area2 / populacao2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (int)populacao2 + (float)area2 + (float)pib2 + (int)numeroPontosTuristico2 + (float)pibPerCapita2 + (float)densidadeInvertida2;


    //-- ESCOLHA DOS ATRIBUTOS
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade Populacional (MENOR VENCE)\n6. PIB per capita\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1. População\n");
    if (atributo1 != 2) printf("2. Área\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos turísticos\n");
    if (atributo1 != 5) printf("5. Densidade Populacional\n");
    if (atributo1 != 6) printf("6. PIB per capita\n");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("Você escolheu o mesmo atributo duas vezes. Encerrando o jogo.\n");
        return 0;
    }

    //-- PEGANDO VALORES PARA COMPARAÇÃO
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // Atributo 1
    switch (atributo1) {
        case 1: valor1_c1 = populacao; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib; valor1_c2 = pib2; break;
        case 4: valor1_c1 = numeroPontosTuristico; valor1_c2 = numeroPontosTuristico2; break;
        case 5: valor1_c1 = densidadePop; valor1_c2 = densidadePop2; break;
        case 6: valor1_c1 = pibPerCapita; valor1_c2 = pibPerCapita2; break;
    }

    // Atributo 2
    switch (atributo2) {
        case 1: valor2_c1 = populacao; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib; valor2_c2 = pib2; break;
        case 4: valor2_c1 = numeroPontosTuristico; valor2_c2 = numeroPontosTuristico2; break;
        case 5: valor2_c1 = densidadePop; valor2_c2 = densidadePop2; break;
        case 6: valor2_c1 = pibPerCapita; valor2_c2 = pibPerCapita2; break;
    }

    //-- EXIBIR VALORES COMPARADOS
    printf("\n--- Comparação dos atributos ---\n");
    printf("Atributo %d - Carta %c%i: %.2f | Carta %c%i: %.2f\n", atributo1, estado, cidade, valor1_c1, estado2, cidade2, valor1_c2);
    printf("Atributo %d - Carta %c%i: %.2f | Carta %c%i: %.2f\n", atributo2, estado, cidade, valor2_c1, estado2, cidade2, valor2_c2);

    //-- COMPARAÇÃO DE CADA ATRIBUTO (com regra para densidade)
    int pontos_c1 = 0, pontos_c2 = 0;

    // Atributo 1
    if (atributo1 == 5) {
        valor1_c1 < valor1_c2 ? pontos_c1++ : (valor1_c2 < valor1_c1 ? pontos_c2++ : 0);
    } else {
        valor1_c1 > valor1_c2 ? pontos_c1++ : (valor1_c2 > valor1_c1 ? pontos_c2++ : 0);
    }

    // Atributo 2
    if (atributo2 == 5) {
        valor2_c1 < valor2_c2 ? pontos_c1++ : (valor2_c2 < valor2_c1 ? pontos_c2++ : 0);
    } else {
        valor2_c1 > valor2_c2 ? pontos_c1++ : (valor2_c2 > valor2_c1 ? pontos_c2++ : 0);
    }

    // Soma dos valores escolhidos
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    //-- RESULTADO FINAL
    printf("\n--- Resultado da rodada ---\n");
    printf("Carta %c%i: soma = %.2f pontos\n", estado, cidade, soma_c1);
    printf("Carta %c%i: soma = %.2f pontos\n", estado2, cidade2, soma_c2);

    if (soma_c1 > soma_c2) {
        printf("Vencedor: Carta %c%i\n", estado, cidade);
    } else if (soma_c2 > soma_c1) {
        printf("Vencedor: Carta %c%i\n", estado2, cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;

    
}