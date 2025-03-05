#include<stdio.h>
int main(){
    int digit;
    printf("Please enter a digit\n");
    scanf("%d", &digit);
    while (digit<=0)
            printf("Please enter a digit greater than 0\n");
    printf("%d can be divided by ", digit);
    for (int divisor=1; divisor<=digit;divisor++){
        if (digit%divisor==0)
            printf("%d, ", divisor);
            }
        printf("\n");
 }