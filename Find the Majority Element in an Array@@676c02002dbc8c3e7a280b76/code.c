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

    // Find the number with the highest frequency
    for (i = 0; i < n; i++) {
        if (freq[arr[i]] != 0) {  
            if (freq[arr[i]] > maxFreq || 
               (freq[arr[i]] == maxFreq && arr[i] > greater)) {  
                greater = arr[i];  // Update to most frequent or larger number if tie
                maxFreq = freq[arr[i]];  // Update max frequency
            }
        }
    }

    // Check if the most frequent number appears more than once
    if (maxFreq > 1) {
        printf("%d", greater);
    } else {
        printf("-1");
    }

    return 0;
}
