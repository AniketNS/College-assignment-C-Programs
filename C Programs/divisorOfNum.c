#include<stdio.h>
void main(){
    int num,i=1;
    printf("Enter a number:");
    scanf("%d",&num);
    while(i<=num){
        if(num%i==0){
            printf("\n%d",i);
        }
        i++;
    }
}
//Enter a number:34
//
//1
//2
//17
//34
