#include <stdio.h>

int main() {
    int input1, input2;
    char choice, repeat;
    float total;

    printf("Welcome to Calculator\n");

    do {
        // 1. Move inputs inside the loop so each calculation gets fresh numbers
        printf("\nChoose operation (+, -, *, /): ");
        scanf(" %c", &choice);
        printf("Input 1st number: ");
        scanf("%d", &input1);
        printf("Input 2nd number: ");
        scanf("%d", &input2);

        if (choice == '+') {
            total = input1 + input2;
            printf("Total: %.2f\n", total);
        } 
        else if (choice == '-') {
            total = input1 - input2;
            printf("Total: %.2f\n", total);
        } 
        else if (choice == '*') {
            total = input1 * input2;
            printf("Total: %.2f\n", total);
        } 
        else if (choice == '/') {
            if (input2 != 0) {
                // Cast to float so 5 / 2 equals 2.50 instead of 2.00
                total = (float)input1 / input2; 
                printf("Total: %.2f\n", total);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
        } 
        else {
            printf("Invalid operation.\n");
        }

        // 2. Fixed scanf syntax and added a leading space before %c
        printf("Continue? Y/N: ");
        scanf(" %c", &repeat);

    // 3. Moved while outside the closing brace and fixed the OR condition
    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}
