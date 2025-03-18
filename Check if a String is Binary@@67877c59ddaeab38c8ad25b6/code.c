// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(i=='0'||i=='1'){
            printf("Yes");
        }else{
            printf("No");
        }
    }
}