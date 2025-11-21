#include<stdio.h>
#include<string.h>

int main() {
    int age;
    float marks;
    char grade;
    char name[50] ;

    printf("Enter your name: ");
    // scanf("%s", name);
    fgets(name, sizeof(name), stdin);
    // Remove newline char added by fgets
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: "); 
    scanf(" %c", &grade);

    printf("Name = %s, Age = %d, Marks = %.2f, Grade = %c", name, age, marks, grade);
    return 0;
}