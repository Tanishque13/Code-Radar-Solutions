// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);

    }
    int count=0;
    for(int i=0;i<=n;i++){
        if(arr[i] ==arr[i]){
            count++;
        }
    }
    printf("%d %d\n",arr[i],count);
}
