#include <stdio.h>
int main(){
    int num,i,isprime=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            isprime=1;
            break;
        }
    }
    if(isprime){
        printf("Not Prime");
    }else{
        printf("Prime");
    }
    return 0;
    
}