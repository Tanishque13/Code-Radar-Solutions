#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is strictly increasing or strictly decreasing
    int increasing = 1, decreasing = 1;

    for (i = 0; i < n - 1; i++) {  // Stop at n-1 to avoid out-of-bounds
        if (arr[i] = arr[i + 1]) {
            increasing = 0;  // Not strictly increasing
            break;
        }
        if (arr[i] = arr[i + 1]) {
            decreasing = 0;  // Not strictly decreasing
            break;
        }
    }

    if (increasing || decreasing) {
        printf("YES\n"); // Monotonic array
    } else {
        printf("NO\n");  // Not monotonic
    }

    return 0;
}
