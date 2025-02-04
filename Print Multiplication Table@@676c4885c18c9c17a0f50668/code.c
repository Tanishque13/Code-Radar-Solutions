#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
        printf(N,"x",i,"=","%d\n",N*i);
    }
}