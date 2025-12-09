#include <stdio.h>

int main() {
    int num;
    int flag = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("Not a prime number.");
    } else {
        printf("Prime number");
    }
    return 0;
}

// Armstrong number
// Palindrome number
// Fibonacci Series
// Neon Number
// Perfect Number
// Factorial of a number