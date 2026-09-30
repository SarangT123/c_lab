#include <stdio.h>

void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        printf("|");
        for (int j = 0; j < columns; j++) {
            printf(" %3d", matrix[i][j]);
        }
        printf(" |\n");
    }
    printf("\n");
}

int multiply_matrix(int rows1, int cols1, int rows2, int cols2,int mat1[rows1][cols1], int mat2[rows2][cols2],int outmat[rows1][cols2]) {
    if (rows2 != cols1) {
        printf("Multiplication not possible\n");
        return 1;
    }
    for (int r = 0; r < rows1; r++) {
        for (int c = 0; c < cols2; c++) {
            int sum = 0;
            for (int i = 0; i < cols1; i++) {
                sum += mat1[r][i] * mat2[i][c];
            }
            outmat[r][c] = sum;
        }
    }
    return 0;
}

int main(void) {
    int mat1[3][2] = {{1, 2}, {4, 5}, {7, 8}};
    int rows1 = sizeof(mat1) / sizeof(mat1[0]);
    int cols1 = sizeof(mat1[0]) / sizeof(mat1[0][0]);
    int mat2[2][2] = {{3, 6}, {9, 7}};
    int rows2 = sizeof(mat2) / sizeof(mat2[0]);
    int cols2 = sizeof(mat2[0]) / sizeof(mat2[0][0]);

    printf("A =\n");
    print_matrix(rows1, cols1, mat1);
    printf("B =\n");
    print_matrix(rows2, cols2, mat2);

    int output[rows1][cols2];
    if (multiply_matrix(rows1, cols1, rows2, cols2, mat1, mat2, output) == 0) {
        printf("A x B =\n");
        print_matrix(rows1, cols2, output);
    }

    return 0;
}