#include <stdio.h>

// Function Declaration
void printName(char name[]);

int main() {
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Function call
    printName(name);
    return 0;
}

// Function Definition
void printName(char name[]) {
    printf("Student's name: %s", name);
}