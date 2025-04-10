// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    scanf("%[^\n]",&str);
    int freq[256]={0};
    for(i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }
    for(i=0;str[i]!='\0';i++){
        if(freq[(int)str[i]]==1){
            printf("%c",str[i]);
        }
    }


}
