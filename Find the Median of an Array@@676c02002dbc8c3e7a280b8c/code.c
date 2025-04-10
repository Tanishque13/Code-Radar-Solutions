#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int median;
    if (n % 2 == 1) {
        // Odd number of elements: middle one
        median = arr[n / 2];
    } else {
        // Even number of elements: average of two middle elements
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2;
    }

    printf("%d\n", median);
    return 0;
}
