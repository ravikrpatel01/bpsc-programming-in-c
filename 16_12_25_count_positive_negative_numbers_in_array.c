#include <stdio.h>

int main() {
    int size, positive_count = 0, negative_count = 0, zero_count = 0;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zero_count++;
        } else if (arr[i] > 0) {
            positive_count++;
        } else {
            negative_count++;
        }
    }

    printf("Positive Count: %d\n", positive_count);
    printf("Negative Count: %d\n", negative_count);
    printf("Zero Count: %d", zero_count);
    return 0;
}