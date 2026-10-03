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
    int vec1[3][1];
    int vec2[3][1];
    int vec2t[1][3];
    int outerprod[3][3];

    printf("Enter 3 elements for vec1:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vec1[i][0]);
    }

    printf("Enter 3 elements for vec2:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vec2[i][0]);
    }

    transpose_matrix(3, 1, vec2, vec2t);

    printf("v1:\n");
    print_matrix(3, 1, vec1);
    printf("v2 transposed:\n");
    print_matrix(1, 3, vec2t);

    if (multiply_matrix(3, 1, 1, 3, vec1, vec2t, outerprod) == 0) {
        printf("Outer product:\n");
        print_matrix(3, 3, outerprod);
    }
    return 0;
}