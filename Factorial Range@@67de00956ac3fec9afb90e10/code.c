#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

