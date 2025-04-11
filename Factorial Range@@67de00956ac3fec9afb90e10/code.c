#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to print factorials in a given range
void factorialRange(int start, int end) {
    if (start < 0 || end < 0 || start > end) {
        printf("Invalid range\n");
        return;
    }

    for (int i = start; i <= end; i++) {
        printf("%d\n", factorial(i));
    }
}
