#include<stdio.h>
void main(){
    int n,fib0=0,fib1=1,fib2;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<1){
        printf("0");
    }
    else{
        printf("0,1");
    }
    for(int i=2;i<=n;i++){
            fib2 = fib0+fib1;
        printf(",%d",fib2);
        fib0=fib1;
    fib1=fib2;
    }
}

//Enter the number:8
//0,1,1,2,3,5,8,13,21
