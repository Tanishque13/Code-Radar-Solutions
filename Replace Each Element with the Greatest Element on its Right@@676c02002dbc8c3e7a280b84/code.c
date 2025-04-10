// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Replace each element with the greatest on its right
    for(i = 0; i < n - 1; i++) {
        int max = arr[i + 1];
        for(j = i + 1; j < n; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }
        arr[i] = max;
    }

    arr[n - 1] = -1; // Last element is always -1

    // Print the modified array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
