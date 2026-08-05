#include <stdio.h>

int main(){
    int no;
    int price = 150;
    int discount_price = 1000;
    int discount=10;
    printf("Enter the number of cakes you want to buy : ");
    scanf("%d",&no);
    float total = price*no;
    if (total>discount_price){
        total = ((100-discount)/100.0)*total;
    }
    printf("\n The total price is %.2f \n",total);
    return 0;
    

}