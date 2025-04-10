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
                // Check if this pair (arr[i], arr[j]) was printed before
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if ((arr[k] == arr[i] && arr[l] == arr[j]) ||
                            (arr[k] == arr[j] && arr[l] == arr[i])) {
                            alreadyPrinted = 1;
                        }
                    }
                }

                if (alreadyPrinted) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}
