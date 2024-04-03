//9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>

int main() {
    int anos, meses, dias, total_dias;

    // Solicita a idade ao usuário
    printf("Digite a idade em anos, meses ou dias (separados por espaços): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    // Converte a idade para dias
    total_dias = anos * 365 + meses * 30 + dias;

    // Exibe o resultado
    printf("A idade em dias é: %d dias\n", total_dias);

    return 0;
}