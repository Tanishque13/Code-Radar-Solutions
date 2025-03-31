#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // It is a prime number
}

// Function to print all prime numbers in a given range
void printPrimesInRange(int a, int b) {
    int found = 0; // Flag to check if any prime number is found
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (found) {
                printf(" "); // Print a space before the next prime number
            }
            printf("%d", i); // Print the prime number
            found = 1; // Set the flag to indicate that a prime was found
        }
    }
    if (!found) {
        printf("No prime numbers");
    }
    printf("\n"); // Newline for neat output
}