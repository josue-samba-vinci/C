#include <stdio.h>
#include <limits.h>

int main () {
  int n;
  printf("Entrez un nombre entier positif");
  scanf("%d", &n);

  int fact = 1;
  for (int i = 2; i<=n; i++){
    fact *= i;
    }
    printf("%d! = %d\n", n, fact);
    printf("INT_MAX = %d\n", INT_MAX);
}