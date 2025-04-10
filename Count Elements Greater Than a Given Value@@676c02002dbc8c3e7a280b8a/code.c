// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int found=0;
    for(i=0;i<n;i++){
        if(arr[i]<k){
            found++;

        }
    }
    printf("%d",found);
}