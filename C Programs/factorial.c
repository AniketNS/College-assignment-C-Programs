#include<stdio.h>
void main(){
    int n,fact=1;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial of given numbers is :%d",fact);
}
//Enter the number :5
//Factorial of given numbers is :120
