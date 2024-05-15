//10. Faça um programa em C que leia um número decimal e o converta em binário (ex.: 9 => 1001).


#include <stdio.h>

int main() {
    int num, resto, binario = 0, digito, lugar = 1;

    printf("Digite um número decimal: ");
    scanf("%d", &num);

    while (num > 0) {
        resto = num % 2; 
        num = num / 2; 
        binario = binario + (resto * lugar); 
        lugar = lugar * 10; 
    }

    printf("O número binário é: %d\n", binario);

    return 0;
}