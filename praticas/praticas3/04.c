//4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.

#include <stdio.h>
#include <ctype.h>

int main() {
    char tecla;

    // Solicita a entrada do usuário
    printf("Digite uma tecla: ");
    scanf(" %c", &tecla);

    // Verifica se a tecla é uma letra
    if (isalpha(tecla))
        printf("%c é uma letra.\n", tecla);
    // Verifica se a tecla é um dígito
    else if (isdigit(tecla))
        printf("%c é um dígito.\n", tecla);
    // Se não for letra nem dígito, é um caractere especial
    else
        printf("%c é um caractere especial.\n", tecla);

    return 0;
}