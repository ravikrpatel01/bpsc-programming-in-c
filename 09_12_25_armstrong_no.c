#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, no_of_digits = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Not an Armstrong number");
        return 0;
    }

    temp = num;

    if (temp == 0)
        no_of_digits = 1;
    else {
        while (temp > 0) {
            no_of_digits++;
            temp = temp / 10;
        }
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        int power = 1;

        for (int i = 1; i <= no_of_digits; i++) {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }

    if (num == sum) {
        printf("This is an Armstrong number.");
    } else {
        printf("This is not an Armstrong number.");
    }

    return 0;
}
