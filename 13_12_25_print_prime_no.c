#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Prime numbers b/w 1 and %d\n", num);
    for (int i = 2; i <= num; i++) {
        int flag = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}