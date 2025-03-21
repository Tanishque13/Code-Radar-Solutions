// Your code here...
#include<stdio.h>
int main(){
int n,i,j;
    scanf("%d",&n);
    
    
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int iseven=1;
    for(i=0;i<n-1;i++){
        if(i%2==0){
            for(j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    iseven=0;
                }
            }
        }
    }if(iseven){
        printf("%d",arr[n]);

    }else{
        printf("-1");
    }
    
}
    