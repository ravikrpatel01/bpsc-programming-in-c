#include <stdio.h>
// 0 1 1 2 3 5 8 13 21 34
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    printf("%d ", a);
    printf("%d ", b);

    for (int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}