// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    
    int ispal=1;
    int j;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j++]=str[i];

        }
    }
    str[j]='\0';
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
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