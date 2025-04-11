// Your code here...
int calculatePenalty(int sd,int sm,int sy,int dd,int dm,int dy){
    int penalty=0;
    if(sy>dy){
        penalty=(sy-dy)*5000;
    }
    printf("%d",penalty);

}