#include <stdio.h>

int main(){
    int arr[5];
    int smallest = 0;
    int largest = 0;
    for(int i =0;i<5;i++){
        printf("enter a number : ");
        scanf("%d",&arr[i]);
        if(i==0){
            largest = arr[i];
            smallest = arr[i];
        }
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("largest = %d, smallest = %d \n",largest,smallest);
    return 0;
}