// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    scanf("%[^\n]",&str);
    int freq[256]={0};
    for(i=0;str[i]!='\0';i++){
        freq[(int)freq[str[i]]]++;
    }
    for(i=0;i<256;i++){
        if(freq[i]==1){
            printf("%s",i);
        }
    }


}
