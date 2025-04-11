#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int result = 1;
    if(n<1){
        printf("Invalid range");
    }
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to print factorials in a given range
void factorialRange(int start, int end) {
    for(int i = start; i <= end; i++) {
        printf("%d\n", factorial(i));
    }
}
