# Initiation au C

## En résumé:

- Les **variables** sont les données stockées temporairement en mémoire vive. la valeur de ces données peut changer au cours du programme.

~~~~~~~C
int calc = 15;
int calk = 20;

return calc + calk;
~~~~~~~~

*On additionne les deux variables pour avoir comme résultat: **35**.*

- À l'opposé, on parle de **constantes** pour des données stockées en mémoire vive. La valeur de ces donnée ne peut pas changer.

~~~~~~~C
const int age = 0;
~~~~~~~~

- Il existe plusieurs types de variables, qui occupent plus ou moins d'espace en mémoire. Certains types comme **int** sont prévus pour stocker des nombres entiers, tandis que d'autres comme **double** stockent les nombres décimaux.

~~~~~~~C
%d  = int
%ld = long
%f  = float
%f  = double
~~~~~~~~

*Noté que le format **float** et **double** sont identiques!*

- La fonction **scanf** permet de deamander à l'utilisateur de saisir un nombre.

~~~~~~~C
int main()
{
  int salaire = 0;

  printf("Quel salaire avez-vous ? ");
  scanf("%d", &salaire);
  printf("Ton salaire est de %d €", salaire);
  
  return 0;
}
~~~~~~~~