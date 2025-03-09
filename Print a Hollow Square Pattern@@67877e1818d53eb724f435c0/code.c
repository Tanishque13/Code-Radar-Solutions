// Your code here...
int i,j,n;
scanf("%d",&n);
for(i=0;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==1 || j==1 || i==n || j==n){
            printf("*");
        }
        else{
            printf(" ");
        }

    }
    printf(" ");
}