// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            for(int i=strlen(str);i>0;i--){
                printf("%s",str);
            }
        }
        
    }
}