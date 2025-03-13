#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int k;
    for(int i=n;i>0;i--){
        if(k>0){
            printf("%d\n",arr[i+k]);

        }
       
    
    }
}