#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum Element = %d", min);
    return 0;
}