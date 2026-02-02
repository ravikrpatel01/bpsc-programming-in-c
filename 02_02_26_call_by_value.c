#include <stdio.h>

void randomFunction(int a) {
    a = 100;
    printf("Value of a inside function = %d\n", a);
}

int main() {
    int a = 25;
    randomFunction(a);
    a = 100;
    printf("Value of a = %d\n", a--);
    printf("Value of a = %d", a);

    return 0;
}