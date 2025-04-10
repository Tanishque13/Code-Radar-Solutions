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
    int first,sec;
    int min=arr[n-1]-arr[n-2];
    for(i=0;i<n;i++){
        if(arr[i]-arr[i+1]<min){
            first=arr[i];
            sec=arr[i+1];
        }
    }
    printf("%d %d",first,sec);
    
    


}