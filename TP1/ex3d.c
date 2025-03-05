#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main () {
  int n;
  printf("Entrez un nombre entier positif");
  scanf("%d", &n);

  int fact = 1;
  for (int i = 2; i<=n; i++){
    if (fact > INT_MAX/i){ //Cela signifie que si fact est déjà plus grand que INT_MAX / i, alors la multiplication fact * i dépassera la capacité maximale d'un entier, et un overflow se produira.
      printf("ERROR : la factiorelle de ce nombre dépasse le INT MAX\n");
      exit(EXIT_FAILURE); //exit(1)
    }
    fact*= i;
   }
   printf("%d! = %d\n", n, fact);
   printf("INT_MAX = %d\n", INT_MAX);
   exit(EXIT_SUCCESS); //exit(2)
}