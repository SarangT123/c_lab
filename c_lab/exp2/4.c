#include <stdio.h>

int main(){
    int nums[3];
    for(int i=0;i<3;i++){
        printf("Enter #%d number : ",i+1);
        scanf("%d",&nums[i]);
        
    }
    int r = nums[0];
    for(int i=0;i<3;i++){
        if (nums[i]>r){
            r = nums[i];
        }


    }
    printf("The largest number is %d",r);
    return 0;
}