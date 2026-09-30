#include <stdio.h>

int dot_product(int n, int a[n], int b[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

int main(void) {
    int v1[3], v2[3];
    char names1[3] = {'x', 'y', 'z'};
    char names2[3] = {'a', 'b', 'c'};

    printf("v1 = <x,y,z>\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter %c: ", names1[i]);
        if (scanf("%d", &v1[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    printf("v2 = <a,b,c>\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter %c: ", names2[i]);
        if (scanf("%d", &v2[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    printf("v1 = <%d, %d, %d>\n", v1[0], v1[1], v1[2]);
    printf("v2 = <%d, %d, %d>\n", v2[0], v2[1], v2[2]);
    printf("v1 . v2 = %d\n", dot_product(3, v1, v2));
    return 0;
}