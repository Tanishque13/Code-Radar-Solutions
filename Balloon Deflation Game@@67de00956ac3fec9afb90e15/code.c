// Your code here...
void deflateBalloons(int n,int air[]){
    int count=0;
    while(n>0){
        for(int i=0;i<n;i++){
        int smallest=air[0];
        if(air[i]<smallest){
            air[i]=air[i-smallest];
            for(i=0;i<n;i++){
                count++;
            }

        }
        printf("%d ",count);
    }

    }
   
}