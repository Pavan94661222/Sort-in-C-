#include <stdio.h>

int main() {
    int num1=10, num2=5, gcd, remainder;


    // Calculate GCD using Euclid's algorithm
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    gcd = num1;

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}
