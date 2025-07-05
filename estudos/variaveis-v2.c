#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Joao";
    
    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção escolhida foi: %c\n", opcao);

    /*
    %d == imprime inteiro no formato decimal
    %i == equivalente a %d.
    %f == imprime numero float no formato padrão.
    %e == imprime um numero float no formato notação cientifica.
    %c == imprime um único caractere.
    %s == imprime uma string
    */
}