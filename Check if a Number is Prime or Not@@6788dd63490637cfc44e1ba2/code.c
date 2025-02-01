#include <stdio.h>
int main(){
    if(num>0){
        int is_p=1;
        for(i=2;i<num;i++){
            if(num%i==0){
                is_p=0
                break;

            }
        }
        if(is_p){
            printf("Prime");
        }
        else{
            printf("Not a Prime");
        }
    }
    return 0;
}