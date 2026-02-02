#include <stdio.h>

// Declaration
int add(int, int);
int sub(int, int);
int mult(int, int);
float div(int, int);
int rem(int, int);
int isDenominatorZero(int);

int main() {
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function calling
    int add_result = add(num1, num2);
    printf("Addition Result = %d", add_result);

    int sub_result = sub(num1, num2);
    printf("\nSubtraction Result = %d", sub_result);

    int mult_result = mult(num1, num2);
    printf("\nMultiplication Result = %d", mult_result);

    float div_result = div(num1, num2);
    if (div_result != -1) {
        printf("\nDivision Result = %.2f", div_result);
    }

    int rem_result = rem(num1, num2);
    if (rem_result != -1) {
        printf("\nRemainder Result = %d", rem_result);
    }

    return 0;
}

// Definition
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int sub(int a, int b) {
    int sub = a - b;
    return sub;
}

int mult(int a, int b) {
    int mult = a * b;
    return mult;
}

float div(int a, int b) {
    int isBZero = isDenominatorZero(b);
    if (isBZero) {
        printf("\nFor Division, denominator can't be zero.");
        return -1;
    }
    float div = (float)a / b;
    return div;
}

int rem(int a, int b) {
    int isBZero = isDenominatorZero(b);
    if (isBZero) {
        printf("\nFor remainder, denominator can't be zero.");
        return -1;
    }
    return a % b;
}

int isDenominatorZero(int b) {
    return b == 0 ? 1 : 0;
}