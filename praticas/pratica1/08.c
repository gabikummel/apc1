
//8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    // Solicita o tempo em segundos ao usuário
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    // Calcula as horas
    horas = segundos / 3600;

    // Calcula os minutos
    minutos = (segundos % 3600) / 60;

    // Calcula os segundos restantes
    segundos_restantes = segundos % 60;

    // Exibe o tempo convertido
    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_restantes);

    return 0;
}