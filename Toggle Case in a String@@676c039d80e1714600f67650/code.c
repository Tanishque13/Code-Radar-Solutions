// Your code here...
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    char str2[100];
    fgets(str,sizeof(str),stdin);
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>'a' && str[i]<'z'){
            str[j++]=toupper(str[i]);
        }else if(str[i]>'A' && str[i]<'Z'){
            str[j++]=tolower(str[i]);
        }
    }
    printf("%s",str);
}
