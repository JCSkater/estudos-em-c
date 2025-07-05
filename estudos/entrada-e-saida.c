#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade digitada foi: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura digitada foi: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite sua opção: ");
    scanf(" %c", &opcao);
    printf("A opção digitada foi: %c\n", opcao);

    return 0;
}