// Your code here...
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){

        for(j=0;j<n-1-i;j++){
            int num=arr[j];
            if(num<num+1){
                int temp=num;
                num=num+1;
                num+1=temp;


            }
            
        }

    }
    printf("%d",arr[n]*arr[n-1]);
    

}
