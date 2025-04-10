// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    // If only one element is present, print -1 and exit
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];

    // Input the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find the smallest difference between adjacent elements
    int minDiff = arr[1] - arr[0];
    int first = arr[0], second = arr[1];

    for (i = 1; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            first = arr[i];
            second = arr[i + 1];
        }
    }

    printf("%d %d\n", first, second);
    return 0;
}
