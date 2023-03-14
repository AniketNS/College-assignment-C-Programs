#include<stdio.h>
#include <stdbool.h>
void main(){
    int n,choice;
    do{
        int fact=1,i;bool ans=true;
        printf("Enter the number:");
        scanf("%d",&n);
        printf("Select choice \n 1. Check Even or Odd \n 2. Print multiplication table \n 3. Find factorial\n 4. CheckPrime or not\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            if(n%2==0){
                printf("It is even number\n");
            }else{
                printf("It is odd number\n");
            }
            break;
        case 2:
            for( i=1;i<=10;i++){
                printf("\n%d",n*i);
            }
            break;
        case 3:
            for( i=1;i<=n;i++){
                fact*=i;
            }
            printf("Factorial of given number is :%d\n",fact);
            break;
        case 4:
            i=2;
            while(i<n){
                if(n%i==0){
                    ans=false;
                }
                i++;
            }
            if(ans==true){
                printf("Given number is prime number\n");
            }else{
                printf("Given number is not a prime number\n");
            }
            break;
        }
    }while(choice==1 || choice==2 || choice==3 || choice==4 );
}
//Enter the number:4
//Select choice
// 1. Check Even or Odd
// 2. Print multiplication table
// 3. Find factorial
// 4. CheckPrime or not
//1
//It is even number
//Enter the number:3
//Select choice
// 1. Check Even or Odd
// 2. Print multiplication table
// 3. Find factorial
// 4. CheckPrime or not
//2
//
//3
//6
//9
//12
//15
//18
//21
//24
//27
//30Enter the number:5
//Select choice
// 1. Check Even or Odd
// 2. Print multiplication table
// 3. Find factorial
// 4. CheckPrime or not
//3
//Factorial of given number is :120
//Enter the number:0
//Select choice
// 1. Check Even or Odd
// 2. Print multiplication table
// 3. Find factorial
// 4. CheckPrime or not
//0
