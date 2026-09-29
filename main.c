#include <stdio.h>
#include "add_sub.h"
#include "mul_div.h"
#include "utils.h"

int main(void) {
    double a, b, result;
    int choice;

    printf("=== Calculator ===\n");

    while (1) {
        printf("\nEnter first number: ");
        if (scanf("%lf", &a) != 1) {
            printf("Invalid input.\n");
            clear_input();
            continue;
        }

        printf("Enter second number: ");
        if (scanf("%lf", &b) != 1) {
            printf("Invalid input.\n");
            clear_input();
            continue;
        }

        printf("\nChoose operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("Your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            clear_input();
            continue;
        }

        switch (choice) {
            case 1:
                result = add(a, b);
                printf("Result: %.2f\n", result);
                break;

            case 2:
                result = subtract(a, b);
                printf("Result: %.2f\n", result);
                break;

            case 3:
                result = multiply(a, b);
                printf("Result: %.2f\n", result);
                break;

            case 4:
                if (b == 0) {
                    printf("Error: division by zero.\n");
                } else {
                    result = divide(a, b);
                    printf("Result: %.2f\n", result);
                }
                break;

            case 0:
                printf("Goodbye!\n");
                return 0;

            default:
                printf("Unknown operation.\n");
        }
    }

    return 0;
}