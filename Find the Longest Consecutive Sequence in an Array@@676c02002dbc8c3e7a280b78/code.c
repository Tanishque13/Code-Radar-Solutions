#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[100];

    // Take input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find longest consecutive sequence
    int max = 1;     // max length
    int count = 1;   // current streak

    for(i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
            // skip if same number
            continue;
        }
        else if(arr[i] == arr[i - 1] + 1) {
            // consecutive
            count++;
        }
        else {
            // not consecutive, reset count
            count = 1;
        }

        // update max if needed
        if(count > max) {
            max = count;
        }
    }

    printf("%d", max);
    return 0;
}
