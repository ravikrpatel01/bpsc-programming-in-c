#include <stdio.h>

int main() {
    FILE* fp;

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("File could not be created.");
        return 1;
    }

    fprintf(fp, "Name: Ravi Kumar Patel\n");
    fprintf(fp, "Age: 24\n");
    fprintf(fp, "Course: MCA (Master of Computer Applications)\n");
    fprintf(fp, "Email: ravi@gmail.com\n");

    fclose(fp);

    printf("Data written successfully.");
    return 0;
}