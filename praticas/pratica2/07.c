//7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.

#include <stdio.h>

int main() {
    float valor_hora_trabalho, total_horas_mes;
    float salario_bruto, salario_liquido, impostos_descontados;
    float taxa_IR = 0.25; // 25%
    float taxa_INSS = 0.11; // 11%

    // Solicita os dados do trabalhador ao usuário
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora_trabalho);

    printf("Digite o total de horas trabalhadas no mês: ");
    scanf("%f", &total_horas_mes);

    // Calcula o salário bruto
    salario_bruto = valor_hora_trabalho * total_horas_mes;

    // Calcula os impostos descontados
    impostos_descontados = salario_bruto * (taxa_IR + taxa_INSS);

    // Calcula o salário líquido
    salario_liquido = salario_bruto - impostos_descontados;

    // Exibe os resultados
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Impostos descontados: R$ %.2f\n", impostos_descontados);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}