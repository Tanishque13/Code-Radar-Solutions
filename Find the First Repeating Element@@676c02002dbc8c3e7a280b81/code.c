// Your code here...
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    
    // Read the input array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using a hash array to store the first occurrence index
    int freq[100000] = {0};  // Assuming elements are within a reasonable range

    // Finding the first repeating element
    for(i = 0; i < n; i++) {
        if (freq[arr[i]] > 0) { // If already seen, it's the first repeating element
            printf("%d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1; // Mark element as seen
    }

    // If no repeating element is found
    printf("-1\n");
    return 0;
}
