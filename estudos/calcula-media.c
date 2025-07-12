#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de Calculo de media ***\n");

    printf("insira sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("insira sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("insira sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;
    printf("a media das suas notas é: %.2f\n", media);

    return 0;
}