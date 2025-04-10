// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    
    printf("%d",count);
}