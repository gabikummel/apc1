//4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%
#include <stdio.h>

int main() {
    float preco_inicial, preco_final;
    float icms = 0.17;    // 17%
    float cofins = 0.076; // 7.6%
    float pis_pasep = 0.0165; // 1.65%

    // Solicita o preço inicial do usuário
    printf("Digite o preço inicial do produto: ");
    scanf("%f", &preco_inicial);

    // Calcula o preço final incluindo os impostos
    preco_final = (1 + icms + cofins + pis_pasep) * preco_inicial;

    // Exibe o preço final
    printf("O preço final do produto, incluindo impostos, é: R$ %.2f\n", preco_final);

    return 0;
}