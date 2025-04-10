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
    int sum=0;
    int medi;
    for(i=0;i<n;i++){
        if(n%2==0){
            sum+=arr[i];
            medi=sum/n;
            break;

        }
        else{
            medi=arr[n]/2;
        }
    }
    printf("%d",medi);


}