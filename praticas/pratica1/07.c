//7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main() {
    double angulo, distancia, altura;

    // Solicita os dados ao usuário
    printf("Digite o ângulo de inclinação do avião em graus (menor ou igual a 45°): ");
    scanf("%lf", &angulo);

    printf("Digite a distância percorrida pelo avião: ");
    scanf("%lf", &distancia);

    // Verifica se o ângulo está dentro do intervalo permitido (0 a 45 graus)
    if (angulo < 0 || angulo > 45) {
        printf("O ângulo de inclinação deve ser menor ou igual a 45°.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Converte o ângulo de graus para radianos
    angulo = angulo * M_PI / 180;

    // Calcula a altura usando a fórmula do seno
    altura = distancia * sin(angulo);

    // Exibe o resultado
    printf("A altura alcançada pelo avião é: %.2lf unidades\n", altura);

    return 0;
}

