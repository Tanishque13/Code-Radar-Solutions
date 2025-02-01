#include <stdio.h>
int main(){
    int age,cit;
    scanf("%d %d",&age,&cit);
    if(age>=18 && cit=1){
        printf("Eligible");
    }else if(age<18 || cit==0){
        printf("Not Eligible");
    }
    return 0;

}