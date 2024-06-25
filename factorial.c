#include <stdio.h>

// Function to find the factorial of a number
int findFactorial(int n) {
    int fact = 1; // Initialize fact to 1

    // Iterate from 1 to n and multiply fact by each integer
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact; // Return the factorial value
}

int main() {
    int num; // Variable to store the user input

    // Prompt the user for input
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Ensure the input is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = findFactorial(num); // Find the factorial of the input number
        printf("The factorial of %d is: %d\n", num, result); // Print the factorial
    }

    return 0;
}

