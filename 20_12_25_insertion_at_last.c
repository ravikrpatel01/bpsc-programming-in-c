#include <stdio.h>

int main() {
    int arr[100];

    int size, key;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to insert at last: ");
    scanf("%d", &key);

    printf("Array elements before insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    arr[size] = key;
    size++;

    printf("\nArray elements after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}