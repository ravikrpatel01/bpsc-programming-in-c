// 1️⃣ Write a C program to add two numbers.
#include<stdio.h>

int main() {
    int first_num;
    int second_num;

    printf("Enter first number: ");
    scanf("%d", &first_num);

    printf("Enter second number: ");
    scanf("%d", &second_num);

    int sum = first_num + second_num;

    printf("First number = %d\n", first_num);
    printf("Second number = %d\n", second_num);
    printf("Sum = %d", sum);

    return 0;
}