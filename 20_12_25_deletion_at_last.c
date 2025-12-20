#include <stdio.h>

int main() {
    int arr[100];

    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements before deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    size--;
    printf("\nArray elements after deletion at last: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}