// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char newstr[100];
    int count =0;
    int j=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        newstr[j++]=str[i];
        if(newstr[j]==str[i]){
            count++;
        }


        

    }
    printf("%s",str[j]);
}