#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(op=='+'){
        printf("%d",a+b);
    }else if(op=='-'){
        printf("%d",a-b);
    }else if(op=='*'){
        printf("%d",a*b);
    }else if(op=='/'){
        printf("%d",a/b);
    }else{
        printf("error");
    }
}