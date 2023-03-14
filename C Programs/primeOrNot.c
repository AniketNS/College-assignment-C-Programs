#include<stdio.h>
#include <stdbool.h>
void main(){
    int num,i=2;
    bool ans=true;
    printf("Enter a number :");
    scanf("%d",&num);
    while(i<num){
        if(num%i==0){
            ans=false;
        }
        i++;
    }
    if(ans==true){
        printf("Given number is prime number");
    }else{
        printf("Given number is not a prime number");
    }
}

//Enter a number :83
//Given number is prime number

//Enter a number :46
//Given number is not a prime number
