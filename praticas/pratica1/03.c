//3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
 #include <stdio.h>

  #define PI 3.1416

  int main() {
      int raio;
      float perimetro;

      // Solicita e lê o valor do raio
      printf("Digite o raio da pizza (um número inteiro): ");
      scanf("%d", &raio);

      // Calcula o perímetro da pizza usando a fórmula dada
      perimetro = 2 * PI * raio;

      // Exibe o perímetro da pizza
      printf("O perímetro da pizza é: %.2f\n", perimetro);

      return 0; // Saída do programa sem erros



}