// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    
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
    int secondLargest = -1;
    // for (i = n - 2; i >= 0; i--) { 
    //     if (arr[i] < arr[n - 1]) { 
    //         secondLargest = arr[i];
    //         break;
    //     }
    for(i=0;i<n;i++){
        if(!(secondLargest)){
        secondLargest=arr[n-2];
        
        }else{
        printf("%d\n", secondLargest);

        }
    }
    
    

    
    
    
    

}