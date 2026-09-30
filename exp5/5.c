// 2. Write a C function to compute the outer product of two vectors and display the
// resulting matrix.

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
                // printf("step %d %d  %d  %d \n",m1r,m2c,i,sum);
            }
            // printf("%d %d    %d \n",m1r,m2c,sum);
            
            outmat[m1r][m2c] = sum;
            
        }
    }


}



int main(){
    int mat1[3][2] = {{1,2},{4,5},{7,8}};
    int rows1 = sizeof(mat1)/sizeof(mat1[0]);
    int cols1 = sizeof(mat1[0])/sizeof(mat1[0][0]);
    int mat2[2][2] = {{3,6},{9,7}};
    int rows2 = sizeof(mat2)/sizeof(mat2[0]);
    int cols2 = sizeof(mat2[0])/sizeof(mat2[0][0]);
    printf("A = \n");    
    print_matrix(rows1,cols1,mat1);
    printf("B = \n");
    print_matrix(rows2,cols2,mat2);

    int output[rows1][cols2];
    multiply_matrix(rows1,cols1,rows2,cols2,mat1,mat2,output);
    printf("Output = \n");
    print_matrix(rows1,cols2,output);
}