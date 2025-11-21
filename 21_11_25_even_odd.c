#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // if(num % 2 == 1) {
    //     printf("%d is odd", num);
    // } else {
    //     printf("%d is even", num);
    // }

    // (num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num);

    int isEven = (num % 2 == 0) ? 1 : 0;

    if (isEven) {
        printf("%d is even", num);
    } else {
        printf("%d is odd", num);
    }
    return 0;
}