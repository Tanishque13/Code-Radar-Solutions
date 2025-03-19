// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ispalind=0;
    int arr[n];
    int krr[100];
  
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j>n;j--){
        int krr[j];
        for(int j=0;j<n;j++){
            if(krr[j]==arr[i]){
                ispalind=1;
            }
        }
        
    }
    
}