#include <stdlib.h>
#include <stdio.h>
int main(){
  int a;
  printf("Entrez un nombre strictement positif dont vous voulez connaître les diviseurs");
  scanf("%d", &a);
  while (a <=0) {
  printf("Entrez un nombre entier strictement positif svp");
  scanf("%d", &a);
  }
  for (int i = 2; i <= a; i++) {
  if (a%i ==0){
  printf("%d",i);
  }
  }
  printf("\n");
}