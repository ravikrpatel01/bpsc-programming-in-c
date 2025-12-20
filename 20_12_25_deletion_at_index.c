#include <stdio.h>

int main() {
    int arr[100];

    int size, index;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }   

    printf("Enter the index where you want to delete the element: ");
    scanf("%d", &index);

    printf("Array elements before deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }
    size--;

    printf("\nArray elements after deletion at index: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}