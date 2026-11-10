#include <stdio.h>
#include <stdlib.h>

int main()
{
   int correctpin = 1234;
    int userpin;
    int count = 0;
    int authenticated = 0;
    int choice;
    int running = 1;

    //Authentication

    while (count < 3) {
        printf("Enter your four digit pin: ");
        scanf("%d", &userpin);

        if (userpin == correctpin) {
            printf("Access Granted\n");
            authenticated = 1;
            break;
        }
        else if (userpin < 1000) {
            printf("Pin is too short. Provide a four-digit pin please\n");
        }
        else if (userpin >9999) {
            printf("Pin is too long. Please provide a four digit pin\n");
        }
        else {
            printf("Access denied\n");
        }
        count++;
    }

    if (count == 3) {
        printf("Too many attempts. Locked out.\n");
    }

    //Display menu

    if (authenticated) {
        while (running) {
        printf("\n===Display menu===\n\n");
        printf("1. Open door\n");
        printf("2. Change username\n");
        printf("3. Change pin\n");
        printf("4. Exit\n");
        scanf("%d", &choice );

        switch (choice) {
        case 1:
            printf("Access granted. Door unlocked");
            break;
        case 2:
            printf("Change username feature coming soon");
            break;
        case 3:
            printf("Change pin feature coming soon");
            break;
        case 4:
            printf("Existing system. Goodbye.");
            running = 0;
            break;
        default:
            printf("Invalid choice\n");
        }
        }
    }
    else {
        printf("Too many attempts. You have been locked out.\n");
    }


    return 0;
}

