// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,num,i;
    scanf("%d %d",&n,&num);
    int count=0;
    
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);

    }
    for(i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    printf("%d",count);
}