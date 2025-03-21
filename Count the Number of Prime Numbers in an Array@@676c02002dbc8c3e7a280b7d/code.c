// Your code here...
#include<stdio.h>
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isprime=1;
    for(i=0;i<n-1;i++){
        if(arr[i]%i==0){
            isprime=0;
            count++;
        }
    }
    printf("%d",count);
}