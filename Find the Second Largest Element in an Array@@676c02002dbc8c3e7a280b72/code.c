// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
    if(n<2){
        printf("-1");
    }
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=1;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
                
                
               
            }
            
        }
    }
    
    if(arr[n-2]!=arr[n-1]){
        printf("%d",arr[n-2]);
    }else{
        printf("-1");
    }
   
    
    
    
    
    
    
    

    
    
    
    

}