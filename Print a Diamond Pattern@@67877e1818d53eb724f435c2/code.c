// Your code here...
#include <stdio.h>

int main() {
    int i, j, n;
    
    
    
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i + j < n + 1) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        for (j = 1; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n; j++) {
            if (i + j < n + 1) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        for (j = 1; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
