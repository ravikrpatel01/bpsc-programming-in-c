// WAP in C to check whether a number is perfect number or not.
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);  // num = 9

    for (int i = 1; i <= num / 2; i++) {  // i = 5
        if (num % i == 0) {
            sum = sum + i;  // sum = 4
        }
    }

    if (num == sum) {  // (9 == 4)
        printf("This is a perfect number.");
    } else {
        printf("This is not a perfect number.");
    }
    return 0;
}