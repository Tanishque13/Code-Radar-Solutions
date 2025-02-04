#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i<=1;i++){
        for (int j=N-i;j<=i;j--){
            printf("* ");
        }
        printf("\n");
    }


}