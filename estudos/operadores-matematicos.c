#include <stdio.h>

int main(){
    // declaração das variáveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    // entrada do usuário
    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o número 2: \n");
    scanf("%d", &numero2);

    // operações matemáticas
    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    multiplicacao = numero1 * numero2;

    divisao = numero1 / numero2;

    // exibe o resultado no terminal
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    return 0;
}