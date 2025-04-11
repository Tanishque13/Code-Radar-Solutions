// Your code here...
void calculatePenalty(int subDay,int SubMonth,int subYear,int dueDay,int Month.int dueYear){
    int penalty=0;
    if(subDay>dueDay && subMonth==dueMonth){
        penalty+=(subDay-dueDay)*10;
    }
    else if((subDay>dueDay && subMonth>dueMonth) ||(subDay<dueDay && subMonth>dueMonth)){
        penalty+=(subMonth-dueMonth)*200;

    }
    else{
        penalty=(subYear-dueYear)*5000;

    }
    printf("%d",penalty);

}