// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
         int count=1;
         if(arr[i]==-1){
            continue;
         }
    }
    for(j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            arr[j]=-1;
            
            
        
        }
    }
    printf("%d %d",arr[i],count);
    }




    

