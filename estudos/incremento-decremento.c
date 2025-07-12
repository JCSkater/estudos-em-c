#include <stdio.h>

int main(){
    int numero1 = 1;

    printf("Antes do incremento: %d\n", numero1);
    // numero1 = numero1 + 1
    numero1++;
    printf("Após incremento: %d\n", numero1);

    // numero1 = numero1 - 1
    numero1--;
    printf("Após decremento: %d\n", numero1);

    return 0;
}