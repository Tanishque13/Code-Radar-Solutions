#include <stdio.h>
int main(){
    int num,i,is_p;
    scanf("%d",&num);
    if(num>0){
        
        for(i=2;i<num;i++){
            if(num%i==0){
                is_p=0;
                break;

            }
        }
        if(is_p){
            printf("Prime");
        }
        else{
            printf("Not a Prime");
        }
    else{
        printf("Not A Prime");
    }
    }
    return 0;
}