#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,num2);
    if(num1==num2){
        printf("Equal");
    }
    else if(num1>num2){
        printf("First");
    }else{
        printf("Second");
    }
    return 0;
}