// Your code here...
#include<stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[100];

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int found=1;
    int num=arr[0];
    
    for(i=1;i<n;i++){
        if(arr[i]!=arr[i-1]+1){
            found=0;
            num=arr[i];

        }
    }
    printf("%d",num);






}