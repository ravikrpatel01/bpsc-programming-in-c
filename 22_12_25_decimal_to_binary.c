#include <stdio.h>

int main() {
    int decimal_num;
    printf("Enter the decimal number: ");
    scanf("%d", &decimal_num);

    if (decimal_num == 0) {
        printf("Binary representation of 0 in 8-bit = 00000000");
        return 0;
    }

    int arr[8] = {0};
    int index = 0;
    int temp = decimal_num;

    while (decimal_num > 0 && index < 8) {
        int rem = decimal_num % 2;  // 1 % 2 = 1
        arr[index] = rem;
        index++;                        // index = 6
        decimal_num = decimal_num / 2;  // 0
    }

    printf("Binary representation of %d in 8-bit = ", temp);
    for (int i = 7; i >= 0; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}