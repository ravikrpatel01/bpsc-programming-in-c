// Searching: 1. Linear search 2. Binary search
#include <stdio.h>

int main() {
    int target, flag = 0;
    int arr[] = {10, 20, 25, 30, 56, 58, 100};

    printf("Enter the number: ");
    scanf("%d", &target); // 25

    int size = sizeof(arr) / sizeof(arr[0]);
    
    int start = 0, end = size - 1; 

    while (start <= end) { // s = 2, end = 2 
        int mid = (start + end) / 2; // 2

        if(arr[mid] == target) {
            flag = 1;
            printf("Element found at index = %d", mid);
            break;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (flag == 0) {
        printf("Element not found!");
    }

    return 0;
}