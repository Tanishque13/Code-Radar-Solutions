// Your code here...
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n-1;i++){

        for(j=0;j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;


            }
            
        }

    }
    printf("%d",arr[j]);
    //printf("%d",arr[n-1]*arr[n-2]);
    

}
