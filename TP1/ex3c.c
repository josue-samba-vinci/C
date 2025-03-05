#include <stdio.h>

int main () {
  int n;
  printf("Entrez un nombre entier positif");
  scanf("%d", &n);

  double fact = 1;
  for (int i = 2; i<=n; i++){
    fact *= i;
    }
    printf("%d! = %f\n", n, fact);
}
//CET EXO NOUS PERMET DE VOIR QUE NOUS NE SOMMES PAS LIMITE AVEC  LE TYPE DOUBLE
// %.0f voudrait dire qu'on veut le chiffre avec aucun chiffre apres la virgule 
// %.2f veut dire qu'on veut 2 chiffres après la virgule
