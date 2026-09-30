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

void transpose_matrix(int rows, int columns, int mat1[rows][columns],int mat2[columns][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            mat2[j][i] = mat1[i][j];
        }
    }
}

int main(void) {
    int mat1[3][2] = {{1, 2}, {4, 5}, {7, 8}};
    int rows = 3;
    int cols = 2;
    int mat2[cols][rows];

    printf("Original:\n");
    print_matrix(rows, cols, mat1);
    transpose_matrix(rows, cols, mat1, mat2);
    printf("Transpose:\n");
    print_matrix(cols, rows, mat2);
    return 0;
}