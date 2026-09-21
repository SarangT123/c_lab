#include <stdio.h>

float product(float a, int b) {
    return a * b;
}

int main() {
    float f;
    int i;

    printf("Enter a float value: ");
    scanf("%f", &f);
    printf("Enter an int value: ");
    scanf("%d", &i);

    float result = product(f, i);
    printf("Product = %.2f\n", result);

    return 0;
}