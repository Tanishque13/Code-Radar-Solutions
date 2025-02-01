#include <stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("Prime\n");
        }else{
            printf("Not Prime");
        }
    
    }
    return 0;
}
    