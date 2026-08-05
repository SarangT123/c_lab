#include <stdio.h>


int main(){
    int marks;
    printf("Enter the students marks : ");
    scanf("%d",&marks);

    if (marks>=90){
        printf("\n Grade A \n");
    }
    else if (marks>=80){
        printf("\n Grade B \n");
    }
    else if (marks>=70){
        printf("\n Grade C \n");
    }
    else if (marks>=60){
        printf("\n Grade D \n");
    }
    else{
        printf("\n Grade F \n");
    }
    return 0;
}