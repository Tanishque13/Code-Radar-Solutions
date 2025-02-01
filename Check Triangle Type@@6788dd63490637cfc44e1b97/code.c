#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c){
        printf("Equilateral");
    }else if((a==b && b!=c) ||(a==c && c!=b)||(b==c &&c!=a)){
        printf("Isoceles");
    }else if(a!=b && b!=c){
        printf("Scalene");
    }
    return 0;
    
}