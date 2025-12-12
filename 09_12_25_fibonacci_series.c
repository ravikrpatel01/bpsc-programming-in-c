// 0 1 1 2 3 5 8 13
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    if (n <= 0) {
        printf("Invalid input");
    } 
    else if (n == 1) {
        printf("%d", a);
    } 
    else {
        printf("%d %d ", a, b);
        for (int i = 3; i <= n; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
