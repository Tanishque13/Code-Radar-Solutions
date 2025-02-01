#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>1){
        int is_p=1;
        for (i=2;i<num,i++){
            if(num%i==0){
                is_p=0
                break;
            }
        }
        if is_p{
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }
    return 0;
}