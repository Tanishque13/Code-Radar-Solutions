// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            int found=arr[i];
            break;
        }

    }
    printf("%d",arr[i]);

}