// Your code here...
#include<stdio.h>
int main(){
    int i,j,num,sum=0;
    scanf("%d",&num);
    int orig=num;
    while(num>0){
        int sum=sum*10+num%10;
        num=num/10;
    }
    if(sum==orig){
        int n=orig;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                for(j=1;j<=n;j++){
                    if(i+j<n+1){
                        printf(" ");
                    }else{
                        printf("%d",n);
                    }

                }
               
            for(j=1;j<=i;j++){
                printf("%d",n);
            }
            printf("\n");


            }
        }
    }


}