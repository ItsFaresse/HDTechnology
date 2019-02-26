#include <stdio.h>
#include <stdlib.h>

int main()
{

  int age = 0;

  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // permet de demander a l'utilisateur de saisir un nombre.
  printf("Ah, vous avez donc %d ans !", age);
  

  return 0;
}
