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

int multiply_matrix(int rows1, int cols1, int rows2, int cols2, int mat1[rows1][cols1], int mat2[rows2][cols2], int outmat[rows1][cols2]) {
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
    int rows1, cols1;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &rows1, &cols1);

    int mat1[rows1][cols1];
    printf("Enter elements for Matrix A (%dx%d):\n", rows1, cols1);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    int rows2, cols2;
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &rows2, &cols2);

    int mat2[rows2][cols2];
    printf("Enter elements for Matrix B (%dx%d):\n", rows2, cols2);
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

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