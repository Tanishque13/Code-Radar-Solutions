// Your code here...
int trackScores(int scores[],int n,int result[]){
    int i;
    int high=scores[0];
    int highsco=0;
    int low=scores[0];
    int lowsco=0;
    for(i=1;i<n;i++){
        if(scores[i]>high){
            high=scores[i];
            highsco++;
            


        }
        if(scores[i]<low){
            low=scores[i];
            lowsco++;
            


        }

    }
    int result[2]={highsco++,lowsco++}
    for(i=0;i<2;i++){
        printf("%d",result);
    }


}