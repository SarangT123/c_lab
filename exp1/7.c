#include <stdio.h>

int main(){
    float total;
    int frnds;
    printf("Enter total of bill : ");
    scanf("%f",&total);
    printf("\n Enter total number of friends : ");
    scanf("%d",&frnds);
    float split = total/frnds;
    printf("\n The split amount is  : %f \n",split);
    return 0;
}