// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,num;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[i]==num){
        printf("%d",i);
    }else{
        printf("-1");
    }
}