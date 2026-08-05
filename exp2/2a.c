#include <stdio.h>

int main(){
    printf("Enter a character : ");
    char c;
    scanf("%c",&c);
    if ((c>='a') && (c<='z'))
    {
        printf("lower case alphabet \n");
    }
    else{
        printf("Not a lower case alphabet \n");
    }
    
}