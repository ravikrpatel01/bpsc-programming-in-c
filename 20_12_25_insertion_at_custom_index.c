#include <stdio.h>

int main() {
    int arr[100];

    int size, key, index;
    int i;
    printf("Enter size: ");  // size = 4
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &key);
    printf("Enter the index: ");
    scanf("%d", &index);

    printf("Array elements before insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    for (i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[i] = key;
    size++;

    printf("\nArray elements after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}