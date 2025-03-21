// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    for(i=0;i<n-1;i++){
        int num=arr[i];
        int sum=0;
        while(num>0){
            
            sum=sum+num%10;
            num=num/10;

        }
        

    }
    printf("%d",sum);
}