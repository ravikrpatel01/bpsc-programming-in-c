// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>

int main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    int printing_value = 1;
    for (int i = 1; i <= row; i++) { // i = 4
        for (int j = 1; j <= i; j++) { // j = 1
            printf("%d ", printing_value++); // 3 --> 4 
        }

        printf("\n");
    }
    return 0;
}