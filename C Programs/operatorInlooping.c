#include<stdio.h>
void main(){
    int n1,n2;
    char choice;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    do{
        printf("\nEnter choice :");
        fflush(stdin);
        scanf("%c",&choice);
//        fflush(stdin);
        switch (choice){
        case '+':
            printf("\nAddition is :%d",n1+n2);
            break;
        case '-':
            printf("\nSubtraction is :%d",n1-n2);
            break;
        case '*':
            printf("\nMultiplication is :%d",n1*n2);
            break;
        case '/':
            printf("\nDivision is :%d",n1/n2);
            break;
        default:
            printf("\nEnter valid operator");
        }
    }while(choice=='+' || choice=='-' || choice=='*' || choice=='/' );
}
//Enter two numbers :9
//3
//
//Enter choice :+
//
//Addition is :12
//Enter choice :/
//
//Division is :3
//Enter choice :*
//
//Multiplication is :27
//Enter choice :-
//
//Subtraction is :6
//Enter choice :&
//
//Enter valid operator
