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
    int smallest=-1;
    int first,second;
    int smallest=arr[0]-arr[1];
    if(arr[i]-arr[i+1]>snallest){
        smallest=1;
        first=arr[i];
        second=arr[i+1];

    }
    if(!(smallest)){
        printf("%d %d",arr[i],arr[i+1]);
    }
    
    


}