#include <stdio.h>

int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int sum = 0;
    while (n>0){
        sum = sum+n%10;
        n = n/10;
    }
    printf("Sum of digits = %d ", sum);
    return 0;
}