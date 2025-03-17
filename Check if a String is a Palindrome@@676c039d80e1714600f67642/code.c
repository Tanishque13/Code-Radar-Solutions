// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    char orig[100]=str;
    int length=strlen(str);
    fir(int i=length-1;i>=0;i--){
        if(str==orig){
            printf("Yes");
        }else{
            printf("No")
        }
    }
}