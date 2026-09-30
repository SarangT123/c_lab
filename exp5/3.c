// Write a C function to calculate the inner (dot) product of two vectors. Read the
// vectors from the user and display the result.


#include <stdio.h>

void print_matrix(int rows, int columns,int matrix[rows][columns]){
    for(int i=0;i<rows;i++){
        printf("|");
        for(int j =0; j<columns; j++){
            printf(" %d ",matrix[i][j]);
        }
        printf("| \n");
    }
    printf("\n\n");
}

void transpose_matrix(int rows, int columns, int mat1[rows][columns],int mat2[columns][rows]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            mat2[j][i] = mat1[i][j];
        }
    }

}

void multiply_matrix(int rows1,int cols1,int rows2,int cols2,int mat1[rows1][cols1],int mat2[rows2][cols2],int outmat[rows1][cols2]){
    if(rows2 != cols1){
        printf("Multiplication not possible");
        return;
    }
    for(int m1r=0; m1r<rows1;m1r++){
        for(int m2c = 0; m2c<cols2;m2c++){
            int sum = 0;
            for(int i=0; i<cols1;i++){

                
                sum = sum + (mat1[m1r][i] * mat2[i][m2c]);
            }
            
            outmat[m1r][m2c] = sum;
            
        }
    }


}

int main(){
    int vec1[3][1];
    int vec2[3][1] ;

    printf("v1 = <x,y,z> \n");
    
    char v1[3] = {'x','y','z'};
    
    for(int i = 0;i<3;i++){
        printf("Enter %c :",v1[i]);
        scanf(" %d",&vec1[i][0]);
    }

    printf("v2 = <a,b,c> \n");
    char v2[3] = {'a','b','c'};

    for(int i = 0;i<3;i++){
        printf("Enter %c :",v2[i]);
        scanf(" %d",&vec2[i][0]);
    }


    
    int vec1t[1][3];
    int outerprod[1][1];

    transpose_matrix(3,1,vec1,vec1t);
    printf("vector 1 \n");
    print_matrix(1,3,vec1t);
    printf("vector 2 transposed \n");
    print_matrix(3,1,vec2);
    multiply_matrix(1,3,3,1,vec1t,vec2,outerprod);
    printf("v1 dot v2 = ");
    print_matrix(1,1,outerprod);

    printf("Result : %d \n",outerprod[0][0]);

}