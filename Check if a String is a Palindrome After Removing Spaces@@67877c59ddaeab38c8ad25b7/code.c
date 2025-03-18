// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char newstr[100];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    
    int ispal=1;
    int j;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            newstr[j++]=str[i];

        }
    }
    newstr[j]='\0';
    int length1=strlen(newstr);
    int ispal=1;
    for(int i=0;i<length1/2;i++){
        if(str[i]!=str[length1-1-i]){
            ispal=0;
            break;
        }
    }
    if(ispal){
        printf("Yes");
    }else{
        printf("No");
    }
}