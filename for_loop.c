#include <stdio.h>

void printNum(int num) {
    if (num == 1) {
        printf("1");
        return;
    }
    printf("%d ", num);

    printNum(num - 1);
}
int main() {
    int n = 100;

    printNum(n);
    return 0;
}