#include <stdio.h>

// Collaborator: ALEXANDROS AMYGDALIOS
int main() {
    int num1, num2, sum;

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2); // Missing semicolon

    // Calculating summary of numbers
    sum = num1 + num2; // Use of wrong operator

    // Printing the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum); // Printf expected a string, given variable is int.

    return 0; // Missing semicolon
}
