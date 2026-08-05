#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count = 0;
    if (n == 0) count = 1;
    while (n > 0) {
        count++;
        n = n / 10;
    }
    printf("digit count : %d" , count);
    return 0;
}