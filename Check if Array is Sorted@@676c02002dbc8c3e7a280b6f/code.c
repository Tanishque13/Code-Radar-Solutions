// Your code here...
#include<stdio.h>
int main(){

    int n,max;
    scanf("%d",&n);
    int arr[n];
    int issorted=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            issorted=1;
        }
    }
    if(issorted){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }

}