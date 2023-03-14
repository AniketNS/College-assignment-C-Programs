#include<stdio.h>
void main(){
    int num1,num2;
    char ch;
    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);
    printf("\nPress 1. for Addition :\nPress 2. for Substraction\nPress 3. for Multiplication\nPress 4. for Division\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch == '1' || ch == '2' || ch == '3' || ch == '4' ){
        if(ch=='1'){
            printf("Addition is :%d",num1+num2);
        }else if(ch == '2'){
            printf("Substraction is :%d",num1-num2);
        }else if(ch == '3'){
            printf("Multiplication is :%d",num1*num2);
        }else{
            printf("Division is :%d",num1/num2);
        }
    }else{
    printf("Enter valid operation");
    }
}
//Enter two numbers :6
//3
//
//Press 1. for Addition :
//Press 2. for Substraction
//Press 3. for Multiplication
//Press 4. for Division
//4
//Division is :2
