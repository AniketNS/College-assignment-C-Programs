#include<stdio.h>
void main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<0){
        num *= -1;
    }
    printf("Number is = %d",num);
}
