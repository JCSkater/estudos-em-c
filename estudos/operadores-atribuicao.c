#include <stdio.h>

int main(){
    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("resultado: %d\n", resultado);

    // resultado = resultado + 20
    resultado += 20;
    printf("resultado: %d\n", resultado);

    // resultado = resultado(30) - numero1(10)
    resultado -= numero1;
    printf("resultado: %d\n", resultado);

    resultado *= 5;
    printf("resultado: %d\n", resultado);

    resultado /= 2;
    printf("resultado: %d\n", resultado);

    return 0;
}