//2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
#include <stdio.h>

int main() {
    float valorBruto, desconto;

    printf("Digite o valor bruto: ");
    scanf("%f", &valorBruto);

    if (valorBruto <= 100.00) {
        desconto = valorBruto * 0.01;
    } else if (valorBruto <= 500.00) {
        desconto = valorBruto * 0.05;
    } else {
        desconto = valorBruto * 0.10;
    }

    printf("O desconto aplicado é de: %.2f\n", desconto);

    return 0;
}