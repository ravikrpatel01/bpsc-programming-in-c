#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char nationality[50];

    printf("Enter your nationality: ");
    scanf("%s", nationality);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (strcmp(nationality, "Indian") == 0) {
        if (age >= 18) {
            printf("Eligible for voting");
        } else {
            printf("Age below 18");
        }
    } else {
        printf("Not an Indian citizen");
    }

    return 0;
}