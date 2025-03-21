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
        if (freq[arr[i]] > maxFreq) {  
            greater = arr[i];  // Update most frequent number
            maxFreq = freq[arr[i]];  // Update max frequency
        }
    }

    // Check if there are multiple numbers with the same max frequency
    int countMax = 0;
    for (i = 0; i < 1000; i++) {
        if (freq[i] == maxFreq) {
            countMax++;
        }
    }

    // If more than one number has the highest frequency, return -1
    if (countMax > 1) {
        printf("-1");
    } else {
        printf("%d", greater);
    }

    return 0;
}
