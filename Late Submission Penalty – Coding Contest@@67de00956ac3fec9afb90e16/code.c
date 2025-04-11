// Your code here...
int calculatePenalty(int subDay,int subMonth,int subYear,int dueDay,int dueMonth,int dueYear){
    int penalty=0;
    if(subDay>dueDay && subMonth==dueMonth){
        penalty=(subDay-dueDay)*10;
    }
    else if((subDay>dueDay && subMonth>dueMonth) ||(subDay<dueDay && subMonth>dueMonth)){
        penalty=(subMonth-dueMonth)*200;

    }
    else{
        penalty=(subYear-dueYear)*5000;

    }
    printf("%d",penalty);

}