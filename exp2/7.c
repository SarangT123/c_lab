#include <stdio.h>

int main(){
    int n = 7;
    float fact = 1.0;
    float sum = 0.0;
    for(int i=1;i<=n;i++){
        fact = fact*i;

        sum  = sum + (i/fact);
    }
    printf("Sum = %f",sum);
    return 0;
}