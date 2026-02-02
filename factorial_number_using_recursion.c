#include <stdio.h>

int findFactorial(int num) {
    if (num == 1 || num == 0) {
        return 1;
    }
    return num * findFactorial(num - 1);
}

int main() {
    int n = 100;
    int result = findFactorial(n);

    printf("Factorial Result = %d", result);
    return 0;
}