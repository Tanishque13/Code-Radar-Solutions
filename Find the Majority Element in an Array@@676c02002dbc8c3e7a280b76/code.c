#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int freq[1000] = {0};  // Frequency array initialized to 0

    // Read input and count frequency
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int majorityElement = -1;  // Default to -1 if no majority element
    int threshold = n / 2;  // Majority condition: more than N/2 times

    // Check for the majority element
    for (i = 0; i < n; i++) {
        if (freq[arr[i]] > threshold) {  
            majorityElement = arr[i];
            break; // Found the majority element, exit loop
        }
    }

    // Print the majority element or -1
    printf("%d", majorityElement);

    return 0;
}
