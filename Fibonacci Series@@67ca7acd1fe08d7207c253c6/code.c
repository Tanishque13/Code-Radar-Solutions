// Your code here...
int fibonacciSeries(int n){
    int x=0;
    int y=1;
    for(int i=0;i<n;i++){
        int sum=x+y;
        x=y;
        y=sum;
        return sum;

    }
    
    
    
    

}
