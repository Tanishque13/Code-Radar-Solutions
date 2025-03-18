// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    int length=strlen(str);
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            for(int j=length;j>0;j--){
                printf("%s",str);
            }
        }
        
    }
}