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
    printf("Matrice 1 (ligne par ligne)\n");

    char tab2D1[MAXDIM][MAXDIM];
    char c = 'A';
    //INIT TAB2D1 L/L
    for(int i =0;i<m;i++){
      for(int j=0;j<n;j++){
        tab2D1[i][j]=c;
        c++;
        if (c>'Z')
            c='A';
        }
       }
   //DISPLAY TABB2D1    
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("%c",tab2D1[i][j]);ss
    }
    printf("\n");
   }
   printf("\n");
   //INIT TAB2D2
   char tab2D2[MAXDIM][MAXDIM];
   c ='A';
   for(int i =0;i<m;i++){
      for(int j=0;j<n;j++){
      tab2D2[j][i]=c;
      c++;
        if (c>'Z')
            c='A';
        }
       }
   //DISPLAY TABB2D2  
   printf("Matrice 2 (colonne par colonne)\n");
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("%c",tab2D2[i][j]);
    }
    printf("\n");
   }  
   printf("\n");

   //COMPARE TAB2D1 AND TAB2D2
   for(int i =0;i<m;i++){
    for(int j=0;j<n;j++){
        if (tab2D1[i][j]==tab2D2[i][j]){
        printf("%c en ligne %d et colonne %d", tab2D1[i][j],i,j);
        printf("\n");
        }   
        }
        }
    printf("\n");

}