// Your code here...
#include <stdio.h>

int main() {
    int n, i, ispalind = 1;
    scanf("%d", &n);
    
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n / 2; i++) {  
        if (arr[i] != arr[n - 1 - i]) {
            ispalind = 0;  
            break;  
        }
    }

    if (ispalind) {
        printf("YES");  
    } else {
        printf("NO");   
    }

    return 0;
}
