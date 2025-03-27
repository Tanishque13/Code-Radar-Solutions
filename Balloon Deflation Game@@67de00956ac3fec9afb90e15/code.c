// Your code here...
void deflateBalloons(int n,int air[i],){
    int smallest=arr[0];
    for(i=0;i<n;i++){
        int num=0;
        if(arr[i]<smallest){
            arr[i]=arr[i-2];
            for(i=0;i<n;i++){
                if(arr[i]!=0){
                    num++;
                }
            }
        }
        


        
        

    }
    printf("%d ",num);
}