// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=n;j++){
            if(i+j<n+1){
                printf(" ");
                a++;
            }else{
                printf("%d ",a);
                a++;
            }
        }
        printf("\n");
        
    }
}