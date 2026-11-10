#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int balance = 1000;

bool login() {
    int pin;
    for (int i = 0; i < 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        if (pin == 1234) {
            return true;
        }
        printf("Wrong PIN.\n");
    }
    printf("Access denied.\n");
    return false;
}

void checkBalance() {
    printf("Balance: %d\n", balance);
}

void deposit(int amount) {
    if (amount <= 0) {
        printf("Amount must be positive.\n");
    } else {
        balance += amount;
        printf("Deposited. New balance: %d\n", balance);
    }
}

void withdraw(int amount) {
    if (amount <= 0) {
        printf("Amount must be positive.\n");
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("Withdrawn. New balance: %d\n", balance);
    }
}

int main() {
    int choice, amount;

    if (!login()) {
        return 0;
    }

    do {
        printf("\n1. Balance Inquiry\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            checkBalance();
        } 
        else if (choice == 2) {
            printf("Enter amount: ");
            scanf("%d", &amount);
            deposit(amount);
        } 
        else if (choice == 3) {
            printf("Enter amount: ");
            scanf("%d", &amount);
            withdraw(amount);
        } 
        else if (choice != 4) {
            printf("Invalid choice.\n");
        }
    } while (choice != 4);

    printf("Goodbye!\n");
    return 0;
}

