// Your code here...
int trackScores(int scores[],int n,int result[]){
    int i;
    int high=scores[0];
    int highsco=0;
    int low=scores[0];
    inr lowsco=0;
    for(i=0;i<n;i++){
        if(scores[i]>high){
            highsco++;


        }
        if(scores[i]<low){
            lowsco++;


        }

    }
    printf("%d %d",highsco,lowsco);


}