#include <stdio.h>

int main() {
    int n;
    int result;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    result = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d", n, result);

    return 0;
}
