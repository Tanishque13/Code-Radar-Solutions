// Your code here...
int factorialRange(int start,int end){
    start=0;
    end=1;
    int i;
    int next=start+end;
    printf("%d",next);
    next=start;
    start=end;
    end=next;
    for(i=start;i<end;i++){
        printf("%d",next);
    }


}