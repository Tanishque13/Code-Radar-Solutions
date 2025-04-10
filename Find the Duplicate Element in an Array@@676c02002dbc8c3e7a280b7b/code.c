// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    for(i=0;i<n;i++){
        arr1[n]=arr[i];
    }
    for(i=0;i<n;i++){
        if(arr1[i]==arr[i]){
            printf("%d",arr[i]);
            break;
        }
    }
    
}
