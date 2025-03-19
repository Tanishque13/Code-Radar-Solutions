// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ispalind=1;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    for(j=n;j>0;j--){
        if(arr[i]!=arr[j]){
            ispalind=1;
        }
        
    }
    if(ispalind){
        printf("YES");
    }else{
        printf("NO");
    }
}