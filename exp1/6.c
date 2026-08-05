#include <stdio.h>

int main(){
    char a[] = {'c','a','t'};
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if(i!=j && j!=k && i!=k){
                    printf("%c%c%c ",a[i],a[j],a[k]);
                }
            }
        }
    }
    return 0;
}
