// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int max=arr[0];
        int min=arr[0];
        if(arr[i]<min){
            printf("%d",arr[i]);

        }
        if(arr[i]>max){
            printf("%d",arr[i]);
        }
    }


}

