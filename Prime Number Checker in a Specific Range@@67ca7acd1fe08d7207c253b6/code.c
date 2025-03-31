#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to print all prime numbers in a given range
void printPrimesInRange(int a, int b) {
    int found = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (found) printf("");
            printf("%d", i);
            found = 1;
        }
    }
    if (!found) printf("No prime numbers");
    printf("\n");
}
