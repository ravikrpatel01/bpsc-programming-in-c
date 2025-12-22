#include <stdio.h>
#include <math.h>

int main() {
    int binary;
    printf("Enter an 8-bit binary number: ");
    scanf("%d", &binary);

    int arr[8] = {0};
    int index = 0;
    int temp = binary;
    int decimal = 0;

    if (binary == 0) {
        printf("Decimal value of 0 = 0");
        return 0;
    }

    // store binary digits
    while (binary > 0 && index < 8) {
        arr[index++] = binary % 10;
        binary /= 10;
    }

    // convert to decimal
    for (int i = 0; i < 8; i++) {
        decimal += arr[i] * (int)pow(2, i);
    }

    printf("Decimal value of %d = %d", temp, decimal);

    return 0;
}
