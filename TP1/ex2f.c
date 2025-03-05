#include <stdio.h>

int main () {
  int a,b;
  printf("Entrez deux nommbres entiers positifs");
  scanf ("%d%d", &a, &b);
  while (a<=0 || b<=0) { //IL NOUS FAUT DES NOMBRES POSITIFS
    printf("Entrez deux nombres strictement positifs");
    scanf("%d%d", &a, &b);
  }

  if (b>a) { //SI B EST PLUS GRAND QUE A ON FAIT UN SWITCH
    int tmp = a;
    a = b;
    b = tmp;
  }

  int q, somme;
  q=0;
  somme=0;
  while (somme+b <= a){
    somme += b;
    q++;
  }
  printf("%d / %d = %d ; reste = %d\n", a,b,q,a-somme);
}
 
