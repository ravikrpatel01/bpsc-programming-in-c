#include <stdio.h>

int main() {
    int a = 10;
    int *p; // Declaration

    p = &a; // Initialization

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value of p = %p\n", p);
    printf("Address of p = %p\n", &p);

    return 0;
}