// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j<n+1){
                printf(" ");
            }else{
                printf("%d",j);
            }
        }
        for(j=1;j<=i;j++){
            prinf("%d",j);
        }
        printf("\n");
    }
}