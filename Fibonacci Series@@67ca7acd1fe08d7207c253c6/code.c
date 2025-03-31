// Your code here...
void fibonacciSeries(int n){
    int x=0;
    int y=1;
    int sum;
    printf("%d %d",x,y)
    for(int i=2;i<n;i++){
        sum=x+y;
        printf("%d",sum);
        x=y;
        y=sum;
        

    }
    
    
    
    

}
