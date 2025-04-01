// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
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
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1] || sizeof(arr[i])==2 && arr[i]<arr[i+1]){
            printf("-1");
        }
    }
    printf("%d",arr[n-2]);
   
    
    
    
    
    
    
    

    
    
    
    

}