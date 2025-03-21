// Your code here...
#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    for(i=0;i<n-1;i++){
        sum=sum+arr[i]%10;
        arr[i]=arr[i]/10;


    }
    printf("%d",sum);
}