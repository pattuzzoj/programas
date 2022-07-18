#include <stdio.h>

int main() {
    printf("Bem-vindo à calculadora IMC em C\n");
    printf("\nDigite os dados abaixo:\n");
    
    float peso, altura;
    printf("\nPeso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);

    printf("\nIMC: %1.1f", peso / (altura * altura));

    return 0;
}