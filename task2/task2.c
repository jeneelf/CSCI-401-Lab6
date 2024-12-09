#include <stdio.h>
#include <stdlib.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(void)
{
    // Define operands
    int a = 6, b = 3; 
    char input;
    int result;

    // Array of function pointers
    int (*operations[])(int, int) = {add, subtract, multiply, divide};

    // Display operands
    printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);

    // Prompt user for operation
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf(" %c", &input);  // Read input

    // Perform operation or exit based on input
    if (input >= '0' && input <= '3') {
        result = operations[input - '0'](a, b);  // Call the appropriate operation
        printf("Result: %d\n", result);  // Print the result
    } else if (input == '4') {
        printf("Exiting program.\n");
        exit(0);  // Exit the program
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

/* Define your functions here */
int add(int a, int b) {
    printf("Adding 'a' and 'b'\n");
    return a + b;
}

int subtract(int a, int b) {
    printf("Subtracting 'b' from 'a'\n");
    return a - b;
}

int multiply(int a, int b) {
    printf("Multiplying 'a' and 'b'\n");
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        printf("Dividing 'a' by 'b'\n");
        return a / b;
    } else {
        printf("Cannot divide by zero.\n");
        return 0;  // Return 0 for invalid division
    }
}
