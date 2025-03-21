// Your code here...
#include<stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            
        }
    }
    int secondMin = -1;
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[0]) { 
            secondMin = arr[i];
            break;
        }
    }

    
    printf("%d\n", secondMin);
    return 0;

}