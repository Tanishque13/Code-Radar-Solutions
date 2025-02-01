#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(ch=="a"||"e"||"i"||"o"||"u"||"A"||"E"||"I"||"O"||"U"){
            printf("Vowel");
        }else{
            printf("Consonant");

            
            
        }
    }

    else if(isdigit(ch)){
        printf("Digit");

    }
    else{
        printf("Special Character");
    }
    return 0;
}