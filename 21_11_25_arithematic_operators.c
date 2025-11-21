#include<stdio.h>

int main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    float div = (float) a / b;
    int remainder = a % b;

    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", multi);
    printf("Division = %.2f\n", div);
    printf("Remainder = %d\n", remainder);

    return 0;

}