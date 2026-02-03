#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    char name[50];
    struct Date dob;
} s1;

int main() {
    printf("Enter Roll No: ");
    scanf("%d", &s1.roll);

    printf("Enter Student's Name: ");
    scanf("%s", s1.name);

    printf("Enter Student's DOB (DD-MM-YYYY): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("----* Entered Student's Details *----\n");
    printf("-------------------------------------\n");
    printf("Student's Roll No: %d\n", s1.roll);
    printf("Student's Name: %s\n", s1.name);
    printf("Student's DOB (DD-MM-YYYY): %02d-%02d-%04d", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}