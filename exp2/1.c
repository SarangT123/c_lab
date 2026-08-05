#include <stdio.h>

int main(){
    printf("Enter n for which n'th triangular number is to be found : ");
    int n;
    scanf("%d",&n);
    int Tn = (n*(n+1))/2;
    printf("The #%d triangular number is %d \n",n,Tn);

    return 0;
}