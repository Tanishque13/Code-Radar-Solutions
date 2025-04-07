// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char x;
    scanf("%[^\n]",&str1);
    scanf("\n");
    scanf("%c",&x);
    int freq[256]={0};
    for(int i=0;i<strlen(str1);i++){
        freq[str1[i]]++;

    }
    int found =0;
    int c=-1;
    for(int i=0;i<strlen(str1);i++){
        if(x==str1[i]){
            int c=i;
            found=1;
            break;

        }
    }
    if(found){
        printf("%d",c);
    }else{
        printf("-1");
    }

}