// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int count=0;
    int  inword=0;
    for(int i=0;str[i]!="\0";i++){
        if (str[i] != ' ' && str[i] != '\n') {
            if(!inword){
                count++;
                inword=1;
            }

        }else{
            inword=0;
        }

    }
    printf("%d",count);
    
    

    }
    
    

    


}