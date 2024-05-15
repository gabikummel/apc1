//9. Faça um programa em C que leia dez números e imprima o maior e o menor entre eles.


#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior, menor;

    printf("Digite dez números:\n");
    for (i = 0; i < 10; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    maior = menor = numeros[0];

    for (i = 1; i < 10; ++i) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}