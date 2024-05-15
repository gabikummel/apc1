//7. Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci.

#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, nextTerm, i;

    printf("Os 10 primeiros números da série de Fibonacci são:\n");

    for (i = 1; i <= 10; ++i) {
        printf("%d, ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }
    printf("\n");

    return 0;
}

/* num1 e num2 são as variáveis que armazenam os dois primeiros números da série de Fibonacci.
nextTerm é a variável que armazena o próximo número da série.
O loop for é usado para calcular os próximos 10 números da série de Fibonacci.
Em cada iteração do loop, o próximo número da série é calculado somando os dois números anteriores (num1 e num2) e então esses valores são atualizados para os próximos cálculos.

*/