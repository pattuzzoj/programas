#include <stdio.h>

int main() {
    float primeiro_numero, segundo_numero;

    printf("Primeiro número: ");
    scanf("%f", &primeiro_numero);
    printf("\nSegundo número: ");
    scanf("%f", &segundo_numero);

    float media = (primeiro_numero + segundo_numero) / 2;

    printf("\nMédia: %1.1f", media);

    return 0;
}