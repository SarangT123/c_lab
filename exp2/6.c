#include <stdio.h>

int main(){
    int i=2;
    int limit = 1000;
    int flag;
    while(i<=1000){
        flag = 0;
        for(int j=2;j<=i/2;j++){
            if (i%j == 0){
                flag=1;
                break;
            }
        }
        if(flag ==0){
            printf("%d \n",i);
        }
        i++;
    }
    
    
    return 0;
}