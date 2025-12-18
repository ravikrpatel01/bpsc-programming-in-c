#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int shristy_arr[n];

    printf("Enter %d array elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &shristy_arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d is stored at memory-address = %p\n", shristy_arr[i], &shristy_arr[i]);
    }
    return 0;
}