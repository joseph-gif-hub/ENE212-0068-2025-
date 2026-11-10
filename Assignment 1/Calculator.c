#include <stdio.h>
#include <stdlib.h>

int main()
{

    double num1, num2, result;
    char operation, choice;

    do{

    printf ("Please enter your first number: ");
    scanf ("%lf", &num1);

    printf("Enter the operator (+, -, *, /)");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operation == '+') {
    result = num1 + num2;
    printf("%.4lf + %.4lf = %.4lf\n", num1, num2, result);
}
else if (operation == '-') {
    result = num1 - num2;
    printf("%.4lf - %.4lf = %.4lf\n", num1, num2, result);
}
else if (operation == '*') {
    result = num1 * num2;
    printf("%.4lf * %.4lf = %.4lf\n", num1, num2, result);
}
else if (operation == '/') {
    if (num2 != 0) {
        result = num1 / num2;
        printf("%.4lf / %.4lf = %.4lf\n", num1, num2, result);
    } else {
        printf("Error: Division by zero!\n");
    }
}
else {
    printf("Invalid operator!\n");
}

printf("Would you like to continue? (y/n): ");
scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}

