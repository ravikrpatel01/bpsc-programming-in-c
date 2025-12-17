#include <stdio.h>

int main() {
    int first_num = 8;
    int second_num = 56;

    printf("Numbers before swapping:\n");
    printf("First number: %d\n", first_num);
    printf("Second number: %d\n", second_num);

    int temp = first_num;

    first_num = second_num;
    second_num = temp;

    // first_num = first_num + second_num;
    // second_num = first_num - second_num;
    // first_num = first_num - second_num;

    printf("Numbers after swapping:\n");
    printf("First number: %d\n", first_num);
    printf("Second number: %d\n", second_num);

    return 0;
}