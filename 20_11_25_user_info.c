#include<stdio.h>

int main() {
    int age;
    float marks;
    char grade;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: "); 
    scanf(" %c", &grade);

    printf("Age = %d, Marks = %.2f, Grade = %c", age, marks, grade);
    return 0;
}