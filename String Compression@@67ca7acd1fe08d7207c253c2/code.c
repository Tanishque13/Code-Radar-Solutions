// Your code here...
char compressString(char str[],char compressed){
    int freq[256]={0};
    int i;
    for(i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;

    }
    found=0;
    for(i=0;str[i]!='\0';i++){
        if(freq[256]!=1){
            found=1;

        }
    

    }
    for(i=0;str[i]!='\0';i++){
        printf("%c %d",str[0],freq[i]);
    }

}