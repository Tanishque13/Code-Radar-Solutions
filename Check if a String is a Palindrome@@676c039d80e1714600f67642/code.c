// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    char result[100]=strcpy(str2,str1);
    scanf("%s",&str1);
    int length=strlen(str1);
    for(int i=length-1;i>=0;i--){
        if(result==str1){
            printf("Yes");
        }else{
            printf("No");
        }
        
    }

}