// Your code here...
#include<stdio.h>
int main(){
    int i,j,N;
scanf("%d",&N);
for(i=0;i<=N;i++){
    for(j=1;j<=N;j++){
        if(i==1 && i==N || j==1 && j==N ){
            printf("*");

        }else{
            printf(" ");
        }
       
    }
    printf("\n");
    }

}
