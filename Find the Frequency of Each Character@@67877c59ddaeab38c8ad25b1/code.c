// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    scanf("%s",&str);
    int freq[256]={0};
    for(i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c: %d\n",i,freq[i]);
        }
    }

}
