// Your code here...
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    char newstr[100];
    fgets(str,sizeof(str),stdin);
    fgets(newstr,sizeof(newstr),stdin);
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i<='z']){
            newstr[j++]=toupper(str[i]);

        }
    }
    newstr[j]='\0';
    printf("%s",newstr);
}