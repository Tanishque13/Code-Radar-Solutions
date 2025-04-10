#include <stdio.h>

int main() {
    int n, i, j, t;
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &t);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
