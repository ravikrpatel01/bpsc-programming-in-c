#include <stdio.h>

int main() {
    int num;
    int fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);  // 5

    if (num < 0) {
        printf("Please enter a zero or positive number.\n");
        // return 0;
    } else {
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }

        printf("Factorial: %d", fact);
    }

    return 0;
}