// Your code here...
#include<stdio.h>
int main(){

    int i,j,n,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j<n+1){
                printf(" ");
            }else{
                printf("*");
            }
        }
    

        for(j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
        for(k=n-1;k>=1;k--){
            for(l=1;l<=n;l++){
                if(i+j<n+1){
                printf(" ");
            }else{
                printf("*");
            }
        }
    

        for(j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
        }
        

        }
    }
    

            
        
       

    

