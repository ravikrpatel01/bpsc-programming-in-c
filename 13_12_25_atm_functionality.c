#include <stdio.h>

int main() {
    int choice, PIN = 1234, entered_pin, new_pin, current_pin, confirm_pin, account_no;
    double current_balance = 0, withdrawal_amount, deposit_amount, transfer_amount;

    printf("Enter PIN: ");
    scanf("%d", &entered_pin);

    if (PIN != entered_pin) {
        printf("Invalid PIN!");
        return 0;
    }

    do {
        printf("\n---- ATM ----\n");
        printf("1. Check balance\n");
        printf("2. Deposit\n");
        printf("3. Debit\n");
        printf("4. Change PIN\n");
        printf("5. Money Transfer\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Available Balance = %.2lf", current_balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%lf", &deposit_amount);

                if (deposit_amount <= 0) {
                    printf("Invalid amount!");
                    break;
                }

                current_balance += deposit_amount;
                printf("Amount credited successfully!\n");
                printf("Available Balance = %.2lf", current_balance);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &withdrawal_amount);

                if (withdrawal_amount > current_balance) {
                    printf("Insufficient balance!\n");
                    printf("Available Balance = %.2lf", current_balance);
                    break;
                }

                current_balance -= withdrawal_amount;
                printf("Transaction successful! Please collect your cash.\n");
                printf("Remaining Amount = %.2lf", current_balance);
                break;
            case 4:
                printf("Changing PIN...\n");
                printf("Enter your current PIN: ");
                scanf("%d", &current_pin);

                if (PIN != current_pin) {
                    printf("Invalid current PIN!");
                    break;
                }

                printf("Enter new PIN: ");
                scanf("%d", &new_pin);

                printf("Enter confirm PIN: ");
                scanf("%d", &confirm_pin);

                if (new_pin != confirm_pin) {
                    printf("PIN mismatch!");
                    break;
                }

                PIN = new_pin;
                printf("PIN updated successfully!");
                break;
            case 5:
                printf("Enter the account number: ");
                scanf("%d", &account_no);

                printf("Enter transfer amount: ");
                scanf("%lf", &transfer_amount);

                if (transfer_amount <= 0) {
                    printf("Invalid transfer amount!");
                    break;
                }

                current_balance -= transfer_amount;
                printf("Amount %.2lf is transferred to a/c %d\n", transfer_amount, account_no);
                printf("Remaining Balance = %.2lf", current_balance);
                break;
            case 6:
                printf("Thanks for using ATM service!");
                break;
            default:
                printf("Invalid Choice!");
        }
    } while (choice != 6);
    return 0;
}