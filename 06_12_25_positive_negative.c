// WAP in C to check if the number is +ve, -ve or none.
#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0 is neither +ve nor -ve");
    } else if (num > 0) {
        printf("Number is positive");
    } else {
        printf("Number is negative");
    }

    return 0;
}