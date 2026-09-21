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
                // printf("step %d %d  %d  %d \n",m1r,m2c,i,sum);
            }
            // printf("%d %d    %d \n",m1r,m2c,sum);
            
            outmat[m1r][m2c] = sum;
            
        }
    }


}

int main(){
    int vec1[3][1] = {{1},{2},{3}};
    int vec2[3][1] = {{4},{5},{6}};

    int vec2t[1][3];
    int outerprod[3][3];

    transpose_matrix(3,1,vec2,vec2t);
    print_matrix(3,1,vec1);
    print_matrix(1,3,vec2t);
    multiply_matrix(3,1,1,3,vec1,vec2t,outerprod);
    print_matrix(3,3,outerprod);

}