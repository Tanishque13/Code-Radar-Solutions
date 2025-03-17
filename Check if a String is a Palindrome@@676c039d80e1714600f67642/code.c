// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str2[100];
    str2[100]=str[100];
    
    scanf("%s",&str);
    
    
    int length=strlen(str);
    for(int i=length-1;i>=0;i--){
        if(str==str2){
            printf("Yes");
        }else{
            printf("No");
        }
    }
}