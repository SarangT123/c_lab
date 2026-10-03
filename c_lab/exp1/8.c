#include <stdio.h>

int main(){
    int n;
    printf("Enter the natural number n upto which you would like to find arithmetic sum : ");
    scanf("%d",&n);
    int sum = (n*(n+1))/2;
    printf("sum of natural numbers upto %d is %d",n,sum);
    return 0;
}