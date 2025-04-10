#include <stdio.h>

int main() {
    int n, i, j, k, t;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &t);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                int duplicate = 0;

                // Check if this pair (arr[i], arr[j]) was already printed
                for (k = 0; k < i; k++) {
                    int l;
                    for (l = k + 1; l < n; l++) {
                        if ((arr[k] == arr[i] && arr[l] == arr[j]) ||
                            (arr[k] == arr[j] && arr[l] == arr[i])) {
                            duplicate = 1;
                        }
                    }
                }

                if (!duplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}
