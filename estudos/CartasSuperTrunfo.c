#include <stdio.h>

int main(){
    // declaração dos tipos de variáveis que serão utilizadas e seus respectivos nomes para carta 01.
    char estado1, codigo_carta1[4], nome_cidade1[20];
    float area1, produto_interno_bruto1;
    int pontos_turisticos1, populacao1;

    // declaração dos tipos de variáveis que serão utilizadas e seus respectivos nomes para carta 02.
    char estado2, codigo_carta2[4], nome_cidade2[20];
    float area2, produto_interno_bruto2;
    int pontos_turisticos2, populacao2;

    // Titulo do App
    printf("************************************\n");
    printf("* Cadastro de Cartas - SuperTrunfo *\n");
    printf("************************************\n");

    // o trecho abaixo recebe as entradas do usuário para a carta 01 e as armazena nas variáveis.
    printf("Carta 01\n");

    printf("Digite a letra do Estado (Letras entre A e H): \n"); // printa mensagem no terminal
    scanf(" %c", &estado1); // input do usuário

    printf("Digite o código da carta (Letra do Estado + Nº sequencial de 01 a 04): \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &produto_interno_bruto1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");

    // o trecho abaixo recebe os inputs do usuário para a carta 02 e as armazena nas variáveis.
    printf("Carta 02\n");

    printf("Digite a letra do Estado (Letras entre A e H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Letra do Estado + Nº sequencial de 01 a 04): \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &produto_interno_bruto2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    //imprime no terminal o resutado de tudo que foi inputado pelo usuário no cadastro da carta 01
    printf("\n");
    printf("************************************\n");
    printf("* Cartas Cadastradas - SuperTrunfo *\n");
    printf("************************************\n");
    printf("\n"); 
    printf("Carta 01\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", produto_interno_bruto1);
    printf("Nº de pontos turísticos: %d \n", pontos_turisticos1);

    //imprime no terminal o resutado de tudo que foi inputado pelo usuário no cadastro da carta 02
    printf("\n");
    printf("Carta 02\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", produto_interno_bruto2);
    printf("Nº de pontos turísticos: %d \n", pontos_turisticos2);

    // encerra o App com sucesso.
    return 0;
}