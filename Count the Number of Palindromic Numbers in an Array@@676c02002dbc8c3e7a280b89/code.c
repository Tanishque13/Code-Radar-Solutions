// Your code here...
#include<stdio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int orig,reverse=0,count=0;
    orig=num;
    for(i=0;i<n;i++){
        while(num>0){
            reverse=reverse*10+num%10;
            num\=10;
        }

    }
    if(orig==reverse){
        count++;
    }
    printf("%d",count);

}
