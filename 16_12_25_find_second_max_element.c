#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Second maximum not possible\n");
        return 0;
    }

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max, second_max;

    if (arr[0] > arr[1]) {
        max = arr[0];
        second_max = arr[1];
    } else {
        max = arr[1];
        second_max = arr[0];
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    printf("Maximum Element = %d\n", max);
    printf("Second Maximum Element = %d\n", second_max);

    return 0;
}
