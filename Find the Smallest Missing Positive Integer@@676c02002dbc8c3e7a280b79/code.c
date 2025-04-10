// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[100];

    // Input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array (Bubble sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find the smallest missing positive number
    int missing = 1; // Start checking from 1
    for(i = 0; i < n; i++) {
        if(arr[i] == missing) {
            missing++;
        }
    }

    printf("%d", missing);
    return 0;
}
