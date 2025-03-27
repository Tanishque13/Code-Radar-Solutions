// Your code here...
void deflateBalloons(int n,int air[],int num){
    
    
    for(int i=0;i<n;i++){
        
        int smallest=air[0];
        if(air[i]<smallest){
            air[i]=air[i-2];
            
            for(i=0;i<n;i++){
                
                if(air[i]!=0){
                    num++;
                }
            }
        }
        


        
        

    }
    printf("%d ",num);
}