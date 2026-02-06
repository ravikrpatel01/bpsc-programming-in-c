#include <stdio.h>

int main() {
    int a = 100, b = 0;

    if (!(!a != !b)) {
        printf("Yes, both a and b contain the same value.");
    } else {
        printf("Both a and b contain different value.");
    }

    return 0;
}
