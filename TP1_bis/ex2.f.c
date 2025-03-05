#include<stdio.h>
#include<stdlib.h>
int main(){
    float float1,float2;
    float reste = float1%float2;
    printf("Please enter two integers");
    scanf("%f", &float1);
    scanf("%f", &float2);
    if (float2>float1)
        float reste = float2%float1;
        printf("Le quotient de l'operation est egal a : %f et le reste est egal a : %f", float2/float1, reste);
    printf("Le quotient de l'operation est egal a : %f et le reste est egal a : %f", float1/float2, reste);
    printf("\n");
 }