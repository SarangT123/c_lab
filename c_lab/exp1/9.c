#include <stdio.h>

int main(){
    float speed;
    printf("Enter speed of vehicle : ");
    scanf("%f",&speed);
    if (speed<=60){ //What to do with 60 wasnt specified it said below 60 no fine and 61-80 500 fine i took it as below 60 no fine
        printf("No fines \n");
    }
    else if(speed<=80){
        printf("500 Fine \n");
    }
    else if(speed<=100){
        printf("2000 Fine \n");
    }
    else{
        printf("5000 Fine \n");
    }
    return 0;
}