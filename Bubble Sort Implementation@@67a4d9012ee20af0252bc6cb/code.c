#include <stdio.h>
int bubbleSort(arr,n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                temp[j]=arr[j+1];
                arr[j]=temp;
            }
        }
    }

}
int Array(arr,n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}