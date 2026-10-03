#include <stdio.h>

int main(){
    int m,i;
    printf("Enter a number : ");
    scanf("%d",&m);
    if(m<=1){
        printf("%d not a prime \n",m);
        return 0;
    }
    for(i=2;i<=m/2;i++){
        if(m%i==0){
            printf("%d is not a prime\n",m);
            return 0;
        }
    }
    printf("%d is a prime\n",m);
    return 0;
}
