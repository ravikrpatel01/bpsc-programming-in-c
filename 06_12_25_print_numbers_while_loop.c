// WAP in C to print ODD numbers b/w 1 and 100
#include <stdio.h>

int main() {
    int i = 1;  // iterator initialization

    while (i <= 100) {  // test condition
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;  // increment
    }

    return 0;
}