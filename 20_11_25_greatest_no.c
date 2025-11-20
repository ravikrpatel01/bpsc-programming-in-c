#include<stdio.h>

int main() {
    int a = 100, b = 23;

    /*
    if (a > b) {
        printf("a is greater than b.");
    } else {
        printf("b is greater than a.");
    }
    */

    // (a > b) ? printf("a is greater than b.") : printf("b is greater than a.");

    int max = (a > b) ? a : b;
    printf("Greatest Number: %d", max);
    return 0;
}