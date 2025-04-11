// Your code here...
char compressString(char str[],char compressed[]){
    int freq[256]={0};
    int i;
    for(i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;

    }
    int count=0;
    for(i=0;str[i]!='\0';i++){
        if(freq[256]==1){
            count=0;

        }else{
            count=1;
        }
    }
    if(count){
        printf("%c",str);
    }
    else{
        printf("%c %d",str[0],freq);
    }

}