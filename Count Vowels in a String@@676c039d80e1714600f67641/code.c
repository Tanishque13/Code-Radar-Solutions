// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%c",&str);
    int length=strlen(str);
    int count=0;
    for(int i=0;i<length;i++){
        
        if(i=='a'||i=='e'||i=='o'||i=='u'||i=='i'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U'){
            count+=1;
            printf("%d",count);
        }
        
    }
}