// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=1;i<n;i++){
        int max=arr[0];
        if(max<arr[i]){
            arr[i]=max
            printf("%d",arr[i]);
        }else{
            printf("-1");
        }

    }
    
}