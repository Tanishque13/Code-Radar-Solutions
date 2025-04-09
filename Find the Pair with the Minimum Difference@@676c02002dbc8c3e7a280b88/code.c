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
    int found=0;
    int first;
    int second;
    int smallest=arr[0]-arr[1];
    for(i=0;i<n;i++){
        if(arr[i]-arr[i+1]<smallest){
        smallest=1;
        first=arr[i];
        second=arr[i+1];
        }

    }
    printf("%d %d",first,second);
    


}