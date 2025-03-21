#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort to sort the array based on absolute values
    int isSorted = 1;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (abs(arr[j]) > abs(arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
    }

    // Find the largest even number after sorting
    int maxEven = -1;
    for (i = n ; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            maxEven = arr[i];
            break;
        }
    }

    // Print result
    printf("%d\n", maxEven);

    return 0;
}
