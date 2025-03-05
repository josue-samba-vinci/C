#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main () {
  int n;
  printf("Entrez un nombre entier positif");
  scanf("%d", &n);

  int fact = 1;
  int i = 2;
  while (i<=n && fact < INT_MAX/i){
    fact*= i;
    i++;
   }
   if (i <n){
     printf("ERROR : la factiorelle de ce nombre dépasse le INT MAX\n");
     exit(EXIT_FAILURE); //exit(1)
   }
   printf("%d! = %d\n", n, fact);
   printf("INT_MAX = %d\n", INT_MAX);
   exit(EXIT_SUCCESS); //exit(2)
}