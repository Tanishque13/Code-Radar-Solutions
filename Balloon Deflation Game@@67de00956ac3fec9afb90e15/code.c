// Your code here...
void deflateBalloons(int n,int air[i],int num){
    int i;
    int smallest=air[0];
    for(i=0;i<n;i++){
        
        if(air[i]<smallest){
            air[i]=air[i-2];
            int num=0;
            for(i=0;i<n;i++){
                if(air[i]!=0){
                    num++;
                }
            }
        }
        


        
        

    }
    printf("%d ",num);
}