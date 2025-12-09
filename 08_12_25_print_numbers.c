#include <stdio.h>

int main() {
    for (int i = 0; i <= 10; i++) {
        if (i == 5) {
            break;  // stops at 4
        }
        printf("%d ", i); // 1 2 3 4
    }
    return 0;
}