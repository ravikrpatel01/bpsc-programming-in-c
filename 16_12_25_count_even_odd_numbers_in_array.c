#include <stdio.h>

int main() {
    int size, even_count = 0, odd_count = 0;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even Count: %d\n", even_count);
    printf("Odd Count: %d", odd_count);
    return 0;
}