// Your code here...
#include<stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(i=0;i<n-1-i;i++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;


            }
            
        }

    }
    printf("%d",arr[n]*arr[n-1]);
    

}
