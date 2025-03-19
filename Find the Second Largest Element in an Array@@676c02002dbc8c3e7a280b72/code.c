// Your code here...
#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1=arr[0],max2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
           
           
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<max1 && arr[i]>max2){
            max2=arr[i];
            
        }
    }if(max2==-1){
        printf("-1");

    }else{
        printf("%d",max2);
    }
    
    
}