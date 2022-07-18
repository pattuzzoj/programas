#include <stdio.h>

int main() {
    printf("Bem-vindo à calculadora em C");
    printf("Escolha a operação aritmética:\nAdição(1), Subtração(2), Multiplicação(3), Divisão(4): ");
    
    int operacao;
    scanf("%d", &operacao);
    
    float primeiro_numero, segundo_numero;
    printf("\nPrimeiro número: ");
    scanf("%f", &primeiro_numero);
    printf("Segundo número: ");
    scanf("%f", &segundo_numero);

    if (operacao == 1) {
        printf("\nResultado: %1.1f", (primeiro_numero + segundo_numero));
    }
    else if (operacao == 2) {
        printf("\nResultado: %1.1f", (primeiro_numero - segundo_numero));
    }
    else if (operacao == 3) {
        printf("\nResultado: %1.1f", (primeiro_numero * segundo_numero));
    }
    else if (operacao == 4) {
        printf("\nResultado: %1.1f", (primeiro_numero / segundo_numero));
    }

    return 0;
}