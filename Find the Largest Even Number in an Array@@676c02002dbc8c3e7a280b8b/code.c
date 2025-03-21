#include <stdio.h>
#include<stdlib.h>

int main() {
    int n, i, maxEven = -1;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = abs(arr[i]);  // Update largest even number
        }
    }

    printf("%d\n", maxEven);
    return 0;
}
