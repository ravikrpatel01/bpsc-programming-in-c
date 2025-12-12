// WAP in C to check whether a number is palindrome or not.
#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        digit = temp % 10;       // 1
        sum = sum * 10 + digit;  // 121
        temp = temp / 10;        // 1
    }

    if (num == sum) {
        printf("This is a palindrome number.");
    } else {
        printf("This is not a palindrome number.");
    }

    return 0;
}
