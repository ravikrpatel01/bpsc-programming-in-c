#include <stdio.h>

// Array prototype
int sumOfArrayElements(int arr[], int);

// Array definition
int sumOfArrayElements(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

float avgOfArrayElements(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float avg = sum / (float)n;
    return avg;
}

int main() {
    int arr[100];
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call
    int sum = sumOfArrayElements(arr, n);
    float avg = avgOfArrayElements(arr, n);
    printf("Sum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}