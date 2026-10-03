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

void outer_product(int n, int a[n], int m, int b[m], int out[n][m]) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            out[i][j] = a[i] * b[j];
        }
    }
}

int main(void) {
    int v1[3];
    int v2[3];
    int outerprod[3][3];

    printf("Enter 3 elements for v1: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Enter 3 elements for v2: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &v2[i]);
    }

    outer_product(3, v1, 3, v2, outerprod);

    printf("v1 = <%d, %d, %d>\n", v1[0], v1[1], v1[2]);
    printf("v2 = <%d, %d, %d>\n", v2[0], v2[1], v2[2]);
    printf("outer product = \n");
    print_matrix(3, 3, outerprod);

    return 0;
}