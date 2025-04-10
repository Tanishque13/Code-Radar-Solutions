#include <stdio.h>

int main() {
    int n, i;
    int freq[1000] = {0}; // Assuming array elements are <= 999
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; // Count frequency while reading input
    }

    int maxFreq = 0;
    int mostFreqNum = arr[0];

    for (i = 0; i < n; i++) {
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            mostFreqNum = arr[i];
        }
    }

    printf("%d\n", mostFreqNum);
    return 0;
}
