// Your code here...
#include<stdio.h>
int main(){
    char str[100];
    scanf("%d",&str);
    int length=strlen(str);
    count=0;
    for(int i=0;i<length;i++){
        count++;
    }
    printf("%d",count);
}