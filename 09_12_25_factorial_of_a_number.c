#include <stdio.h>

int main() {
    int num;
    long long fact = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a zero or positive number.\n");
        return 0;
    }

    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial: %lld", fact);
    return 0;
}
