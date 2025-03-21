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
    int countMax = 0;  // To track how many numbers have max frequency

    // Find the number with the highest frequency
    for (i = 0; i < n; i++) {
        if (freq[arr[i]] != 0) {  
            if (freq[arr[i]] > maxFreq) {  
                greater = arr[i];  // Update most frequent number
                maxFreq = freq[arr[i]];  // Update max frequency
                countMax = 1; // Reset count since we found a higher frequency
            } else if (freq[arr[i]] == maxFreq && arr[i] != greater) {  
                countMax++; // Another number has the same max frequency
            }
        }
    }

    // Check if there is a unique most frequent number
    if (maxFreq > 1 && countMax == 1) {
        printf("%d", greater);
    } else {
        printf("-1");
    }

    return 0;
}
