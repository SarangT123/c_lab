#include <stdio.h>

int main(void)
{
    int class, failed, grace = 0;

    printf("Enter class obtained: ");
    scanf("%d", &class);

    printf("Enter number of subjects failed in: ");
    scanf("%d", &failed);

    switch (class) {
        case 1:
            if (failed <= 3)
                grace = failed * 5;
            break;

        case 2:
            if (failed <= 2)
                grace = failed * 4;
            break;

        case 3:
            if (failed == 1)
                grace = 5;
            break;

        default:
            grace = 0;
    }

    printf("Grace marks = %d\n", grace);

    return 0;
}