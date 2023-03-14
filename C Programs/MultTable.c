#include<stdio.h>
void main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("\n%d*%d = %d",num,i,num*i);
    }
}
//Enter the number :7
//
//7*1 = 7
//7*2 = 14
//7*3 = 21
//7*4 = 28
//7*5 = 35
//7*6 = 42
//7*7 = 49
//7*8 = 56
//7*9 = 63
//7*10 = 70
