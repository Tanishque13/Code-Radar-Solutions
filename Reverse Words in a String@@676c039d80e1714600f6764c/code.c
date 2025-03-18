// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i!='0';i>0;i--){
        printf("%s",str);
    }
}