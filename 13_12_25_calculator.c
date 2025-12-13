#include <stdio.h>

int main() {
    int choice, num1, num2;
    float result;

    do {
        printf("\n----- CALCULATOR -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("6. Exit\n");

        printf("\nPlease enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);

                result = num1 + num2;
                printf("Addition Result = %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);

                result = num1 - num2;
                printf("Subtraction Result = %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);

                result = num1 * num2;
                printf("Multiplication Result = %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);

                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                    break;
                }

                result = (float)num1 / num2;
                printf("Division Result = %.2f\n", result);
                break;

            case 5: {
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);

                if (num2 == 0) {
                    printf("Error! Remainder by zero is not allowed.\n");
                    break;
                }

                int rem = num1 % num2;
                printf("Remainder Result = %d\n", rem);
                break;
            }

            case 6:
                printf("Thanks for using Calculator!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}
