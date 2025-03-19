// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            printf("%d ",arr[i]);
        }else{
            printf("%d",i=arr[i]);
        }
       
    }
}
}