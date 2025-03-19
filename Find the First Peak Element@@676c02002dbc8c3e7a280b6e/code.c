// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int max=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>max){
            max=arr[i];
            break;
        }
    }
    printf("%d",max);
        
        

    
}


    
