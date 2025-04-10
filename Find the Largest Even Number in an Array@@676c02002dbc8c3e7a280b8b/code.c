#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort to sort the array based on absolute values
    int isSorted = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (abs(arr[j]) < abs(arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 1;
            }
        }
    }
    int max=1;
    int largest=arr[0];
    for(i=0;i<n;i++){
        if(arr[n-1]%2!=0 && largest<arr[n-i]){
            
            max=0;
            largest=arr[n-i];
            break;
            
        }
    }
    if(max){
        printf("%d",largest);
    }else{
        printf("-1");
    }
    

    
}
