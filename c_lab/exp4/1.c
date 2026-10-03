#include <stdio.h>

int find_min(int *array, int n){
    int min = 0;
    int val = array[0];
    for (int i =0; i<n;i++){
        if (array[i]<val){
            min = i;
            val = array[i];
        }
        
    }
    return min;
}


int main(){
    int n = 10;
    int a[10]={12,2,3,4,5,6,10,7,8,9};
    int min = find_min(a,n);
    printf("min no is %d at pos %d",a[min],min);
    return 0;

}