#include <stdio.h>

void print_digit_word(int digit) {
    switch (digit) {
        case 0: printf("zero ");  break;
        case 1: printf("one ");   break;
        case 2: printf("two ");   break;
        case 3: printf("three "); break;
        case 4: printf("four ");  break;
        case 5: printf("five ");  break;
        case 6: printf("six ");   break;
        case 7: printf("seven "); break;
        case 8: printf("eight "); break;
        case 9: printf("nine ");  break;
    }
}

int main() {
    int num, reversed = 0, trailing_zeros = 0;
    
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    if (num == 0) {
        printf("zero\n");
        return 0;
    }

    if (num < 0) {
        printf("minus ");
        num = -num;
    }

    // Count and track trailing zeros before reversing
    while (num > 0 && num % 10 == 0) {
        trailing_zeros++;
        num /= 10;
    }

    // Reverse the number to print left-to-right
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    // Print digits from the reversed integer
    while (reversed > 0) {
        print_digit_word(reversed % 10);
        reversed /= 10;
    }

    // Print any trailing zeros recorded earlier
    while (trailing_zeros > 0) {
        print_digit_word(0);
        trailing_zeros--;
    }

    printf("\n");
    return 0;
}