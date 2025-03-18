// Your code here...
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    char newstr[100];
    fgets(str,sizeof(str),stdin);
    
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if (isalpha(str[i])) { 
            newstr[j++]=toupper(str[i]);

        }
    }
    newstr[j]='\0';
    printf("%s\n",newstr);
}