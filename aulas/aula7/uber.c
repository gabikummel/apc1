#include <stdio.h>

int main () {
  int avaliacao = 0;

  printf ("Entre com os valores de 1 a 5:");
  int leu_certo = scanf ("%i", &avaliacao);
  if ( avaliacao == 1) {
    printf ("O motorista ganhou *\n");
  } else if (avaliacao == 2) {
    printf ("O motorista ganhou **\n");
  } else if (avaliacao ==3 ) {
    printf ("O motorista ganhou ***\n");
  } else if (avaliacao == 4) {
    printf ("O motorista ganhou ****\n");
  } else if (avaliacao == 5) {
    printf ("O motorista ganhou *****\n");
  } else {
    printf ("Avaliação inválida, tente novamente");
  }
  




  return 0;
}