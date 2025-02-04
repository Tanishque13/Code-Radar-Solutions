#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
        printf("%d",N);
        printf(" x ");
        printf("%d",i);
        printf(" = ");
        printf("%d\n",N*i);
    }
}