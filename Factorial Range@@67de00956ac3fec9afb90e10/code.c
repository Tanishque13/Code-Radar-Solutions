// Your code here...
int factorialRange(int start,int end){
    int start=0;
    int end=1;
    int next=start+end;
    printf("%d",next);
    next=start;
    start=end;
    end=next;
    for(start=0;start<end;start++){
        pritf("%d",next);
    }


}