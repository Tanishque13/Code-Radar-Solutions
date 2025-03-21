#include <stdio.h>

int main() {
    int i, n;
    int count = 0;
    
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {  // Start from 0 to check all elements
        int isprime = 1;
        
        if (arr[i] < 2) {
            isprime = 0; // Numbers less than 2 are not prime
        } else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isprime = 0;
                    break;
                }
            }
        }
        
        if (isprime) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}
