// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>

int main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) { // i = 3
        for (int j = 1; j <= i; j++) { // j = 1
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}