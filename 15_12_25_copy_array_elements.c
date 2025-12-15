#include<stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    int copy_arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        copy_arr[i] = arr[i];
    }

    printf("Original Array Elements: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    //Copy
    // for (int i = 0; i < size; i++) {
    //     copy_arr[i] = arr[i];
    // }

    printf("\nCopy Array Elements: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", copy_arr[i]);
    }

    return 0;
}