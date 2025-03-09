// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j<n+1){
                printf(" ");
            }
            

            
            else{
                
                
                printf("*");
            }
            for(i>=2&&j>n+1){
                if(i+j>n+2 && i+j<n+4){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
            
        }
        printf("\n");

    }
}
