// Searching: 1. Linear search 2. Binary search

#include <stdio.h>
int main() {
    int target, flag = 0;
    int arr[] = {10, 2, -25, 23, 56, 2, 58, 100, 2};

    printf("Enter the number: ");
    scanf("%d", &target);

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            flag = 1;
            printf("Element found at index = %d", i);
            break;
        }
    }

    if (!flag) {
        printf("Element not found!");
    }
    return 0;
}