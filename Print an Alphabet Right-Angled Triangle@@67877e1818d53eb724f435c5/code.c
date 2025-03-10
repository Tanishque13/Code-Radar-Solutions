// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            char b=(char)a;
            printf("%c",b);
            a++;
        }
        printf("\n");
    }
}