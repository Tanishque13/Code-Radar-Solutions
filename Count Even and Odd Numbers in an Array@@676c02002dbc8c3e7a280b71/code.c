// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);

    }
    count1=0;
    count2=0;
    for(int j=0;j<n;j++){
        if(arr[i]%2==0){
            printf("%d",count1++);

        }else{
            printf("%d",count2++);
        }
    }
}