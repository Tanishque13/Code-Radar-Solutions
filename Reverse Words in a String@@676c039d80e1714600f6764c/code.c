// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    fgets(str,sizeof(str),stdin);
    for(str[i]!='\0';i>0;i--){
        printf("%s",str);
    }
}