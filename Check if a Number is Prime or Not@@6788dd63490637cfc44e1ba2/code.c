#include <stdio.h>
int main(){
    int num,i,isprime=1;
    for(i=2;i<num;i++){
        if(num%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
    
}