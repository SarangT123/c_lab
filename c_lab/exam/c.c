#include <stdio.h>

int main(){
    int arr[5];
    int sum = 0; 
    int n = 5;
    for (int i =0;i<n;i++){
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];

    }
    printf("sum = %d",sum);
    
    return 0;
}