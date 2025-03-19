// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,num;
    scanf("%d",&n);
    int found=-1;
    int arr[n];
    int found=-1;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    
    for(i=0;i<n;i++){
        if(arr[i]==num){
            printf("%d",i);
            return 0;

        }
    }
    printf("%d",found);
}