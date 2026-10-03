#include <stdio.h>

int findLargest(int a, int b, int c) {
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    return largest;
}

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int result = findLargest(a, b, c);
    printf("Largest number = %d\n", result);

    return 0;
}