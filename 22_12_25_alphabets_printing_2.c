// A
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>

int main() {
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
