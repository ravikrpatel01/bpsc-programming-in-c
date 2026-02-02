#include <stdio.h>

void calculate(int a, int b, int* sum, int* diff) {
    printf("Ravi....\n");
    printf("Address of a = %p\n", &a);
    printf("Address of b = %p\n", &b);
    printf("Address of sum = %p\n", &sum);
    printf("Address of diff = %p\n", &diff);

    *sum = a + b;
    *diff = a - b;
}

int main() {
    int a = 10, b = 20, add, sub;

    // printf("Enter 2 numbers: ");
    // scanf("%d %d", &a, &b);

    printf("Address of a = %p\n", &a);
    printf("Address of b = %p\n", &b);
    printf("Address of add = %p\n", &add);
    printf("Address of sub = %p\n", &sub);

    calculate(a, b, &add, &sub);  // calculate(10, 20, 0061FF14, 0061FF10)

    printf("Sum = %d", add);
    printf("\nDifference = %d", sub);

    return 0;
}