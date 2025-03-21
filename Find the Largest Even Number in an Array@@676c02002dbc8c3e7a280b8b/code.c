// Your code here...
#include<stdio.h>
int main(){
int n,i,j;
    scanf("%d %d",&n,&num);
    
    
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n-1;i++){
        if(i%2==0){
            for(j=0;j<n-1-i){
                if(arr[i]>arr[i+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    printf("%d",arr[n-1]);
}
    