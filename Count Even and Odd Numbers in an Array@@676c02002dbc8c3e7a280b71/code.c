// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=arr[n];i++){
        scanf("%d",&arr[i]);

    }
    int count1=0;
    int count2=0;
    for(int j=1;j<=arr[n];j++){
        if(arr[j]%2==0){
            printf("%d",count1++);

        }else{
            printf("%d",count2++);
        }
    }
}