//8. Faça um programa em C que calcule o fatorial de um número inteiro.

#include <stdio.h>

#include <stdio.h>


int calcularFatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calcularFatorial(n - 1);
}

int main() {
    int numero, fatorial;

   
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

  
    if (numero < 0) {
        printf("Erro: O fatorial de um número negativo não está definido.\n");
        return 1; 
    }

   
    fatorial = calcularFatorial(numero);

    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0; 
}