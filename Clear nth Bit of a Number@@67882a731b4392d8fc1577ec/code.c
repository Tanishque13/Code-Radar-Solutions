#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(~(1<<b)&a));
    



}