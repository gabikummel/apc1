//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>


 int main() {
     float valor_em_gigabytes;
     double valor_em_bytes;

     // Solicita e lê o valor em gigabytes
     printf("Digite o valor em gigabytes: ");
     scanf("%f", &valor_em_gigabytes);

     // Converte o valor em gigabytes para bytes
     valor_em_bytes = valor_em_gigabytes * 1024 * 1024 * 1024;

     // Exibe o valor em bytes
     printf("%.2f Gigabytes equivale a %.0f Bytes\n", valor_em_gigabytes, valor_em_bytes);

     return 0;
 }