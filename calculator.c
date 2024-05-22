// Features: 1. +,-,*,/,^,% 
//           2. Reruns till user exists
//           3. Unit conversion

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void showMenu();
void calc();
void performUnitConversion();

int main(void) {
    char mode;

    printf("Welcome to the calculator\n");
    printf("=========================\n");
    printf("Calculations + Unit Conv.\n");
    printf("=========================\n");

    do {
        showMenu();
        scanf(" %c", &mode);
        switch (mode) {
            case 'C':
            case 'c':
                printf("Calculator Mode\n");
                calc();
                break;
            case 'U':
            case 'u':
                printf("Conversion Mode\n");
                performUnitConversion();
                break;
            case 'E':
            case 'e':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid input. Please enter 'C' for Calculations, 'U' for Unit Conversion, or 'E' to Exit.\n");
                break;
        }
    } while (mode != 'E' && mode != 'e');

    return 0;
}

void showMenu() {
    printf("\nFor Calculations press 'C'\n");
    printf("For Unit Conversion press 'U'\n");
    printf("To Exit press 'E'\n");
    printf("Enter your choice: ");
}

void calc() {
    char op;
    int a, b;
    printf("Choose operation: +, -, *, /, ^, %% \n");
    scanf(" %c", &op); // Note the space before %c to consume any trailing newline character
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("The sum is: %d\n", a + b);
            break;
        case '-':
            printf("The difference is: %d\n", a - b);
            break;
        case '*':
            printf("The product is: %d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                printf("The quotient is: %d\n", a / b);
            }
            break;
        case '^':
            printf("The result is: %.2lf\n", pow(a, b));
            break;
        case '%':
            if (b == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                printf("The remainder is: %d\n", a % b);
            }
            break;
        default:
            printf("Invalid operation. Please enter a valid operator.\n");
            break;
    }
}

void performUnitConversion() {
    int choice;
    double value, convertedValue;

    printf("Unit Conversion Options:\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Miles to Kilometers\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("4. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter value in Kilometers: ");
            scanf("%lf", &value);
            convertedValue = value * 0.621371;
            printf("Value in Miles: %.2lf\n", convertedValue);
            break;
        case 2:
            printf("Enter value in Miles: ");
            scanf("%lf", &value);
            convertedValue = value * 1.60934;
            printf("Value in Kilometers: %.2lf\n", convertedValue);
            break;
        case 3:
            printf("Enter value in Celsius: ");
            scanf("%lf", &value);
            convertedValue = (value * 9 / 5) + 32;
            printf("Value in Fahrenheit: %.2lf\n", convertedValue);
            break;
        case 4:
            printf("Enter value in Fahrenheit: ");
            scanf("%lf", &value);
            convertedValue = (value - 32) * 5 / 9;
            printf("Value in Celsius: %.2lf\n", convertedValue);
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
    }
}











