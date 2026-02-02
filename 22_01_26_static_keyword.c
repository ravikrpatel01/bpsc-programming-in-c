#include <stdio.h>

void printNumber() {
    static int num = 10;
    printf("%d\n", num);
    num++;
}

void print() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    i++;
    printf("%d ", i);
}

int main() {
    // printNumber();
    // printNumber();
    // printNumber();
    // printNumber();
    // printNumber();
    print();
    return 0;
}