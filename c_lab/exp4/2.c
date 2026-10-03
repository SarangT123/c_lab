#include <stdio.h>

int main() {
    int count[11] = {0};
    int rating, n;

    printf("Enter number of ratings: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter rating (0-10): ");
        scanf("%d", &rating);

        if (rating >= 0 && rating <= 10) {
            count[rating] = count[rating] + 1;
        } else {
            printf("Invalid rating, ignored.\n");
        }
    }

    for (int i = 0; i <= 10; i++) {
        printf("Rating %d: %d\n", i, count[i]);
    }

    return 0;
}