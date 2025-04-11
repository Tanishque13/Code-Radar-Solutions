// Your code here...
int factorialRange(int start,int end){
    start=0;
    end=1;
    int next=start+end;
    printf("%d",next);
    next=start;
    start=end;
    end=next;
    for(start=0;start<end;start++){
        printf("%d",next);
    }


}