// Your code here...
void trackScores(scores,n,result){
    int high=scores[0];
    hihsco=0;
    int low=scores[0];
    lowsco=0;

    for(i=0;i<n;i++){
        if(scores[i]>scores[0]){
            high=scores[i];

        }
        for(i=0;i<n;i++){
            if(scores[i]>high){
                highsco++;
            }
        }
        if(scores[i]<scores[0]){
            low=scores[i];

        }
        for(i=0;i<n;i++){
            if(scores[i]<low){
                lowsco++;
            }
        }



    }
    printf("%d %d",highsco,lowsco);
    
    


}