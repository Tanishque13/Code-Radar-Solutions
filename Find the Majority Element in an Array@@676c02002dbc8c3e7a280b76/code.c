#include <stdio.h>

int main() {
    int n, i;
    int freq[1000] = {0};  // Frequency array initialized to 0
    scanf("%d", &n);
    int arr[n];

    // Read input and count frequency
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int greater = arr[0];  // Assume first number is the most frequent
    int maxFreq = freq[arr[0]];  // Store its frequency
    int freqCheck[1000] = {0};  // To check if any frequency appears more than once

    // Find the number with the highest frequency
    for (i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq) {  
            greater = arr[i];  // Update most frequent number
            maxFreq = freq[arr[i]];  // Update max frequency
        }
    }

    // Check if any frequency value appears more than once
    for (i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            freqCheck[freq[i]]++;  
            if (freqCheck[freq[i]] > 1) {
                printf("-1");
                return 0;
            }
        }
    }

    // If no two numbers have the same frequency, print the most frequent number
    printf("%d", greater);
    
    return 0;
}
