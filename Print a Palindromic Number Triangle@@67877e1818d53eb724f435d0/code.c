// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,num,sum=0;
    scanf("%d",&num);
    int orig=num;
    while(num>0){
        int x=sum+num%10;
        num=num/10;
    }if(x==num){
        for(i=1;i<=n;i++){
            for(j=1;j<=i;i++){
                for(j=1;j<=n;j++){
                    if(i+j<n+1){
                        printf(" ");
                    }else{
                        printf("%d",num)''
                    }

                }
                printf("\n");


            }
        }
    }


}