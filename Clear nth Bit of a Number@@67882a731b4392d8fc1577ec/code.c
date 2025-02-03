#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>>31)&b){
        printf("%d",1);
    }else{
        printf("%d",0);
    }



}