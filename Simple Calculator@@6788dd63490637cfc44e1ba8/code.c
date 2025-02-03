#include <stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d",&a,&b);
    scanf("%c",op);
    if(op=='+'){
        int sum=a+b;
        printf("%d",sum);
    }else if(op=='-'){
        printf("%d",a-b);
    }else if(op=='*'){
        printf("%d",a*b);
    }else if(op=='/'){
        printf("%d",a/b);
    }else{
        printf("error");
    }
    return 0;
}