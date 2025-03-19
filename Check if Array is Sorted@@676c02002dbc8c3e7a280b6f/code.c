// Your code here...
#include<stdio.h>
int main(){

    int n,max;
    scanf("%d",&n);
    int arr[n];
    int issorted=1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]!=arr[i+1]){
            issorted=0;
        
        
    }
    if(issorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }

}
