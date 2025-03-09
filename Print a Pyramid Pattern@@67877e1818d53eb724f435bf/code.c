// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j<n+1){
                printf(" ");
            }
            else if(i+j>n+4){
                printf("*");

            }
            else{
                
                
                printf("*");
            }
        }
        printf("\n");

    }
}
