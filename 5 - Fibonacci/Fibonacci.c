#include <stdio.h>

int fibonacci(int posicao) {
  printf("");
  
  int fibo, fibo1, fibo2;
  fibo = fibo1 = 1;

  for(int i = 0; i < posicao; i++) {
    fibo = fibo1 + fibo2;
    fibo2 = fibo1;
    fibo1 = fibo;
  }

  printf("\nO número de fibonacci na posição %d é: %d", posicao, fibo);

  char recomecar;

  do {
    printf("\nDigite 's' ou 'n'.\nGostaria de informar uma nova posição? ");
    scanf("%c", &recomecar);
  }
  while(recomecar != 's' && recomecar != 'n');

  if(recomecar == 's') {
    return 1;
  }
  else {
    printf("\nObrigado por utilizar o nosso programa.");
    return 0;
  }
}


int main(void) {
  int posicao, retornado;
  
  do {
    do {
      printf("\nPosição: ");
      scanf("%d", &posicao);
  
      if(posicao <= 0) {
        printf("Insira uma posição válida.\n");
      }
    }
      while(posicao <= 0);
  
    retornado = fibonacci(posicao);
    }
    while(retornado == 1);
  return 0;
}