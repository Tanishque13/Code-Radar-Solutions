// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ispalind=0;
    int arr[n];
    int krr[x];
  
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=n;i>0;i--){
        int arr[x]=arr[i];
        if(arr[x]==arr[i]){
            ispalind =1;
        }
        
    }
    if(ispalind){
        printf("NO");
    }else{
        printf("YES");
    }
}