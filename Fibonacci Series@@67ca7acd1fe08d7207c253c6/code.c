// Your code here...
void fibonacciSeries(int n){
    int x=0;
    int y=1;
    for(int i=2;i<n;i++){
        int sum=x+y;
        printf("%d",sum);
        x=y;
        y=sum;
        

    }
    
    
    
    

}
