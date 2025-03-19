// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    int krr[100]={0};
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int count[j]=0;
    for(j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            count[j]=1;
        }
        printf("%d %d",arr[i],count);
    }




    
}
