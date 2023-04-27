//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.


#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers to add: ");
                scanf("%f%f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers to subtract: ");
                scanf("%f%f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers to multiply: ");
                scanf("%f%f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers to divide: ");
                scanf("%f%f", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: division by zero\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (1);
    
    return 0;
}
