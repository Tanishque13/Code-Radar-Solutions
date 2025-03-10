// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        if(a==1){
            a=0;
        }else{
            a=1;
        }
        for(j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d",a);
            }
            
        }
        printf("\n");

    }
}