#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort to sort the array
    int isSorted = 1;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;  // Means a swap happened, array wasn't sorted
            }
        }
    }

    if (isSorted) {
        printf("%d", arr[n - 1]); // Last element in sorted array
    } else {
        printf("-1");
    }

    return 0;
}
