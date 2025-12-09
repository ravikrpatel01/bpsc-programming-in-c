#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.");
    } else {
        // while-loop
        int i = 1;

        while (i <= 10) {
            printf("%d * %d = %d\n", num, i, (num * i));
            i++;
        }
    }
    return 0;
}