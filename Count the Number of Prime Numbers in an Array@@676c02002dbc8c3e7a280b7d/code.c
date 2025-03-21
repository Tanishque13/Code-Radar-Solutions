// Your code here...
#include<stdio.h>
int main(){
    i
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isprime=1;
    int i,n,count=0;
    for(i=2;i<n-1;i++){
        if(arr[i]%i==0){
            isprime=0;
            count++;
        }
    }
    printf("%d",count);
}