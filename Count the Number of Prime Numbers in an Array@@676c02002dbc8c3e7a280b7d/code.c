// Your code here...
#include<stdio.h>
int main(){
    int i,n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n-1;i++){
        if(arr[i]%i==0){
            count++;
        }
    }
    printf("%d",count);

    
}