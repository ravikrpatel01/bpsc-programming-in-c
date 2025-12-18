#include <stdio.h>

int main() {
    int a[2][2][2];

    printf("Enter 8 numbers:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    printf("You entered:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}