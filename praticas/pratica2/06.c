//6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>

int main() {
    float valor_compra, valor_depreciado;
    int ano_fabricacao, ano_depreciacao;
    float taxa_depreciacao = 0.01;

    // Solicita os dados do veículo ao usuário
    printf("Digite o valor de compra do veículo: ");
    scanf("%f", &valor_compra);

    printf("Digite o ano de fabricação do veículo: ");
    scanf("%d", &ano_fabricacao);

    printf("Digite o ano de depreciação do veículo: ");
    scanf("%d", &ano_depreciacao);

    // Calcula o valor depreciado do veículo
    valor_depreciado = (ano_depreciacao - ano_fabricacao) * taxa_depreciacao * valor_compra;

    // Exibe o valor depreciado do veículo
    printf("O valor depreciado do veículo é: R$ %.2f\n", valor_depreciado);

    return 0;
}