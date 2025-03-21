// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=arr[0];
    for(i=1;i<=n;i++){
        sum=sum+arr[i];
        printf("%d ",sum);
    }
}