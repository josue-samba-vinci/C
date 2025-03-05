#include<stdio.h>
int main(){
    int a,b;
    printf("Please enter two integers");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("You chose %d and %d\n",a,b);
    int tmp=a;
    a=b;
    b=tmp;
    printf("Switched values are %d and %d",a,b);
}