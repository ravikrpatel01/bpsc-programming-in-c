#include <stdio.h>

int main() {
    int a = 5, b = 3;   // 1 1 0 0
                        //  0 1 1 1
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = a << 1;
    int g = a >> 1;

    printf("Bitwise AND Result: %d\n", c);
    printf("Bitwise OR Result: %d\n", d);
    printf("Bitwise XOR Result: %d\n", e);
    printf("Bitwise Left-Shift Result: %d\n", f);
    printf("Bitwise Right-Shift Result: %d\n", g);
    return 0;
}