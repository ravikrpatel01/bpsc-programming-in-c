#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your full name: ");
    // scanf("%s", name);
    fgets(name, 20, stdin);

    printf("You entered: %s", name);
    return 0;
}