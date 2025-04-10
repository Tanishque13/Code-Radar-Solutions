#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int inc = 1, dec = 1;

    for(i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            inc = 0;  // not increasing
        }
        if(arr[i] > arr[i - 1]) {
            dec = 0;  // not decreasing
        }
    }

    if(inc || dec) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
