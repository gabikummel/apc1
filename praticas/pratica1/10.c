//10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>
int main() {

  
      int numero, unidade, dezena, centena, milhar;

      // Solicita o número ao usuário
      printf("Digite um número inteiro: ");
      scanf("%d", &numero);

      // Calcula as unidades, dezenas, centenas e milhares
      unidade = numero % 10;
      dezena = (numero / 10) % 10;
      centena = (numero / 100) % 10;
      milhar = numero / 1000;

      // Exibe a decomposição
      printf("O número %d é decomposto em:\n", numero);
      printf("Unidades: %d\n", unidade);
      printf("Dezenas: %d\n", dezena);
      printf("Centenas: %d\n", centena);
      printf("Milhares: %d\n", milhar);

      return 0;
  }
