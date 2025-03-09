// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    for(int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i+j>n){
                printf("*");

            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
} 