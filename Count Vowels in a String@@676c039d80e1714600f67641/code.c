// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int length=strlen(str);
    int count=0;
    for(int t=0;t<length;t++){
        char i=str[t];
        if(i=='a'||i=='e'||i=='o'||i=='u'||i=='i'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U'){
            count++;
           
            
        }
         
        
        
    }
    printf("%d",count);
}