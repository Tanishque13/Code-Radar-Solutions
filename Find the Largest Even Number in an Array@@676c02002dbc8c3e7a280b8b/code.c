#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max=-1;
    for(i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]>max || max==-1)
        max=arr[i];
    }
    printf("%d",max);

    
    
}
