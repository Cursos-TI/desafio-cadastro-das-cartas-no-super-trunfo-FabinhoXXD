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


    //EXIBIR OS DADOS DA PRIMEIRA CARTA
    printf("\n--- Informações da primeira cidade ---\n");
    printf("Estado: %c\n", estado);
    printf("Cidade nº: %c%i\n", estado,cidade);
    printf("População: %i habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %i\n", numeroPontosTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop);
    printf("PIB per Capita: %.2f Reais\n", pibPerCapita);

    //EXIBIR OS DADOS DA SEGUNDA CARTA
    printf("\n--- Informações da segunda cidade ---\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade nº: %c%i\n", estado2,cidade2);
    printf("População: %i habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %i\n", numeroPontosTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f Reais\n", pibPerCapita2);


    //FAZER OS COMPARATIVOS DAS CARTAS E EXIBIR OS RESULTADOS
    printf("\n\n--- Informações da batalha ---\n");

    if (populacao > populacao2){
        printf("Populacao: Carta %c%i venceu\n",estado,cidade);
    }else{
        printf("Populacao: Carta %c%i venceu\n",estado2,cidade2);
    }

    if (area > area2){
        printf("Area: Carta %c%i venceu\n",estado,cidade);
    }else{
        printf("Area: Carta %c%i venceu\n",estado2,cidade2);
    }

    if (pib > pib2){
        printf("PIB: Carta %c%i venceu\n",estado,cidade);
    }else{
        printf("PIB: Carta %c%i venceu\n",estado2,cidade2);
    }

    if (numeroPontosTuristico > numeroPontosTuristico2){
        printf("Ponto turistico: Carta %c%i venceu\n",estado,cidade);
    }else{
        printf("Ponto turistico: Carta %c%i venceu\n",estado2,cidade2);
    }

    if (densidadePop > densidadePop2){
        printf("Densidade populacional: Carta %c%i venceu\n",estado,cidade);
    }else{
        printf("Densidade populacional: Carta %c%i venceu\n",estado2,cidade2);
    }

    if (pibPerCapita > pibPerCapita2){
        printf("PIB Per Capita: Carta %c%i venceu\n",estado,cidade);
    }else{
        printf("PIB Per Capita: Carta %c%i venceu\n",estado2,cidade2);
    }


    //EXIBIR O RESULTADO FINAL DA BATALHA
    printf("\n\n--- Resultado final da batalha ---\n");
    if (superPoder > superPoder2){
        printf("Com o super poder da carta %c%i, ela vence a batalha com: %.2f pontos\n",estado,cidade,superPoder);
    }else{
        printf("Com o super poder da carta %c%i, ela vence a batalha com: %.2f pontos\n",estado2,cidade2,superPoder2);
    }

    return 0;
}