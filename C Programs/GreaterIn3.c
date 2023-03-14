#include<stdio.h>
void main(){
    int num1,num2,num3;
    printf("Enter 3 numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is Maximum",num1);
        }else{
            printf("%d is Maximum",num3);
        }
    }else{
        if(num2>num3){
            printf("%d is maximum",num2);
        }else{
            printf("%d is maximum",num3);
        }
    }
}
//Enter 3 numbers :7
//8
//34
//34 is maximum
