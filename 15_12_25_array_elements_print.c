#include<stdio.h>

int main() {
    /*
    int arr[5] = {45, 25, 36, 85, 90};

    printf("Array Elements: \n");

    for (int i = 0; i <= 5 - 1; i++) {
        printf("%d ", arr[i]);
    }
    */

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array Elements: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}