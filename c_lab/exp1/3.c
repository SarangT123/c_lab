#include <stdio.h>

int main(){
    float f;
    printf("enter temperature in Fahrenheit : ");
    scanf("%f",&f);
    float c = (f-32)/1.8;
    printf("%f Fahrenhiet is %f celsius",f,c);


    return 0;
}