#include <stdio.h>

typedef struct Student {
    int roll_no;
    char name[50];
    char email[50];
    char gender;
    int age;
    float marks;
} Student;

// Function to take input
void getStudentDetails(struct Student* std) {
    printf("Enter roll no: ");
    scanf("%d", &std->roll_no);

    printf("Enter name: ");
    scanf("%s", std->name);

    printf("Enter email: ");
    scanf("%s", std->email);

    printf("Enter gender (M/F): ");
    scanf(" %c", &std->gender);

    printf("Enter age: ");
    scanf("%d", &std->age);

    printf("Enter marks: ");
    scanf("%f", &std->marks);
}

// Function to print details
void printStudentDetails(struct Student std) {
    printf("----- Student Details -----\n");
    printf("Roll No: %d\n", std.roll_no);
    printf("Name: %s\n", std.name);
    printf("Email: %s\n", std.email);
    printf("Gender: %c\n", std.gender);
    printf("Age: %d\n", std.age);
    printf("Marks: %.2f\n", std.marks);
}

int main() {
    Student s1;
    Student s2;
    Student s3;

    getStudentDetails(&s1);
    getStudentDetails(&s2);
    printStudentDetails(s1);
    printStudentDetails(s2);

    return 0;
}
