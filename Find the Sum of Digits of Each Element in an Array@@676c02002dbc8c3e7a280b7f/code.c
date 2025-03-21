// Your code here...
#include<stdio.h>
#include<maths.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int num=abs(arr[i]);
        int sum=0;
        while(num>0){

            sum=sum+num%10;
            num=num/10;

        }
        printf("%d ",sum);

    }
   
}