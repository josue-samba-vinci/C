#include <stdlib.h>
#include <stdio.h>
#define NBMAXSTUDENT 50

int main (){
  int val;//les chiffres que l'on va entrez
  float notes [NBMAXSTUDENT];//nouveau tableau avec une note par étudiant
  int cpt = 0;//compteur pour etre sûr que le tableau ne depasse pas 50
  float som = 0;//servira pour la moyenne

//SAISIE DES NOTES
  printf("Entrez les notes des étudiants et pressez Ctrl-D pour terminer : \n");
  while ((cpt < NBMAXSTUDENT) && (scanf("%d",&val) != EOF)) { //scanf reverra EOF si on entre CTRL+D au clavier"
      notes[cpt] = val;
      som += val;
      cpt++;
  }

 //CALCUL DE LA MOYENNE
 printf("Nous allons maintenant calculer la moyenne de tous les nombres saisi\n");
 float moy= som/cpt;
 printf("La moyenne est égale à : %f\n", moy);

 //CALCUL DES ECARTS DE MOYENNES
float ecart;
for (int i=0;i<cpt;i++){
    ecart=notes[i]-moy;
    printf("l'écart de l'étudiant %d : %f - %f = %f\n",i+1,notes[i],moy,ecart);
    }
}



 