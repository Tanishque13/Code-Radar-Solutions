// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int found=1;
    for(i=0;i<n;i++){
        if(arr[i]+arr[i+1]!=t){
            found=0;
        }
    }
    if(found){
        printf("%d %d\n",arr[i],arr[i+1]);
    }

}