// Your code here...
#include<stdio.h>
int main(){
    int i,n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n;i++){
        int isprime=1;
        if(arr[i]>2){
            isprime=0;
        }else{
            for(i=2;i*i<arr[i];i++){
                if(arr[i]%i==0){
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime){
            count++;
        }
        
    }
    printf("%d",count);
    

}