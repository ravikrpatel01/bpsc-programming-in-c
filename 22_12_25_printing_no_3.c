// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include <stdio.h>

int main() {
    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}