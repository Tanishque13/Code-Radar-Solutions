#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=="a" || "e" || "i" || "o" || "u"){
        printf("Vowel");
    }elif(ch!="a" || "e" || "i" || "o" || "u"){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
    return 0;

}