#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=a;i<=1;i++){
        for (j=a-i;j<=i;j--){
            printf("*");
        }
        printf("\n");
    }


}