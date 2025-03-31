#include <stdio.h>
void printPrimesInRange(int count,int i,int j){
    if(count==2){
        printf("%d",i);
        
    }else{
        printf("No Prime Numbers");
    }

}
void isPrime(int a,int b){
    int iss=0;
    for(int i=a;i<=b;i++){
        int count=0;
        for(int j=0;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
    }

}