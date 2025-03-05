#include <stdlib.h>
#include <stdio.h>
#define MAXDIM 9
int main (){
    int m; //nombre de lignes
    int n; //nombre de colonnes

    printf("Entrez le nombre de lignes des matrices : ");
    scanf("%d",&m);
    printf("Entrez le nombre de colonnes des matrices : ");
    scanf("%d",&n);
    printf("\n");
    
   //INIT TAB2D avec lettre aleatoire
    char tab2D[MAXDIM][MAXDIM];
   for(int i =0;i<m;i++){
      for(int j=0;j<n;j++){
      tab2D[j][i]='A'+(rand()%26);//generations de lettres aleatoires 
        }
   }
   //DISPLAY TAB2D avec lettre aleatoire
   printf("Matrice avec lettres aleatoires\n");
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("%c",tab2D[i][j]);
    }
    printf("\n");
   }
    printf("\n");

   //CREATION DU TABLEAU QUI RETIENDRA LE NOMBRE D'OCCURENCE DE CHAQUE LETTRE PAR LIGNE
   int count[MAXDIM][26]={{0}}; //ligne de la matrice limitee par maxdim et colonne sera le nombre de lettres presentes dans l'alphabet
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
        count[i][tab2D[i][j]-'A']++;
   }

   //AFFICHAGE DU TABLEAU
   printf("         ");
    for (char c='A'; c<='Z'; c++)
        printf(" %c",c);
    printf("\n\n");
    for (int i=0; i<m; i++) {
        printf("Ligne %d: ",i+1);
        for (int j=0; j<26; j++)
            printf(" %d", count[i][j]);
        printf("\n");
    }
   printf("\n");
}

