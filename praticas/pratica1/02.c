//2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
 #include <stdio.h>

 int main() {
     int base, altura;
     float area;

     // Solicita e lê os valores da base e da altura
     printf("Digite a base do triângulo (um número inteiro maior que 0): ");
     if (scanf("%d", &base) != 1) {
         printf("Erro ao ler a base do triângulo.\n");
         return 1;
     }

     // Verifica se a base é válida
     if (base <= 0) {
         printf("A base do triângulo deve ser um número inteiro maior que 0.\n");
         return 1; // Saída do programa com erro
     }

     printf("Digite a altura do triângulo (um número inteiro maior que 0): ");
     if (scanf("%d", &altura) != 1) {
         printf("Erro ao ler a altura do triângulo.\n");
         return 1;
     }

     // Verifica se a altura é válida
     if (altura <= 0) {
         printf("A altura do triângulo deve ser um número inteiro maior que 0.\n");
         return 1; // Saída do programa com erro
     }

     // Calcula a área do triângulo usando a fórmula dada
     area = (float)(base * altura) / 2;

     // Exibe a área do triângulo
     printf("A área do triângulo é: %.2f\n", area);

     return 0; // Saída do programa sem erros
 }