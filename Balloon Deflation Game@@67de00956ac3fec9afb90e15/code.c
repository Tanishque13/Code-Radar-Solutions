// Your code here...
void deflateBalloons(int n,int air[]){
    int count=0;
    while(n>0){
        int smallest=air[0];
        for(int i=0;i<n;i++){
        
        if(air[i]<smallest){
            smallest=air[i];
            
            
            }

        }
        int reamining=0;
        for(i=0;i<n;i++){
            if(air[i]>0){
                air[i]-=smallest;
                reamining++;
            }
        }
        printf("%d ",reamining);
    }

    }
   
}