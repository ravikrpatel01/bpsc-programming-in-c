// WAP in C to check whether a number is neon or not.
#include <stdio.h>

int main() {
    int num, square, digit_sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    while (square > 0) {
        int last_digit = square % 10;
        digit_sum += last_digit;
        square /= 10;
    }

    if (num == digit_sum) {
        printf("This is a neon number.");
    } else {
        printf("This is not a neon number.");
    }

    return 0;
}