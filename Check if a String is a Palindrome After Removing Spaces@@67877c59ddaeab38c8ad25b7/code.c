// Your code here...
#include<stdio.h>
#include<string.h>
int main{
    char str[100];
    fgets(str,sizeof(str),stdin);
    //ispal=1;
    int j;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j++]=str[i];

        }
    }
    str[j]='\0';
    printf("%s",str);
}