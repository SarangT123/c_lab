#include <stdio.h>

int main(){
    int m,i;
    int flag = 0;
    printf("Enter a number : ");
    scanf("%d",&m);
    if(m<=1){
        printf("%d is neither prime nor composite\n",m);
        return 0;
    }
    for(i=2;i<=m/2;i++){
        if(m%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is prime\n",m);
    else
        printf("%d is composite\n",m);
    return 0;
}
