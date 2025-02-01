#include <stdio.h>
#include <math.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1==num2*num2){
        printf("Yes");

    }else{
        printf("No");
    }
    return 0;
}