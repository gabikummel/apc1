//6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, raiz_delta, raiz1, raiz2;

    // Solicita os coeficientes da equação ao usuário
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    // Calcula o delta
    delta = b * b - 4 * a * c;

    // Verifica se o delta é negativo (não existem raízes reais)
    if (delta < 0) {
        printf("Não existem raízes reais.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Calcula a raiz do delta
    raiz_delta = sqrt(delta);

    // Calcula as raízes usando a fórmula de Bhaskara
    raiz1 = (-b + raiz_delta) / (2 * a);
    raiz2 = (-b - raiz_delta) / (2 * a);

    // Exibe as raízes
    printf("As raízes da equação são: %.2lf e %.2lf\n", raiz1, raiz2);

    return 0;
}