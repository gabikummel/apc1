//1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.


#include <stdio.h>

int main() {
  int numero1, numero2, numero3, media;

  //Solicita os números do usuário
  printf("Digite o primeiro número: ");
  scanf ("%f %f %f", &num1, &num2, &num3);

  //Calcula a média aritmética
    media = (num1 + num2 + num3) / 3;

      // Exibe a média aritmética
      printf("A média aritmética dos números %.2f, %.2f e %.2f é: %.2f\n", num1, num2, num3, media);

      return 0;
  }












  
}
