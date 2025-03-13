// Your code here...
#include<stdio.h>
int main(){

    int n,max;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        max=arr[0];
    if(max<arr[i]){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    
    }
}


