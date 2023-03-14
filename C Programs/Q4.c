#include<stdio.h>
void main(){
    int num,reverse=0,r;
    printf("Enter the number :");
    scanf("%d",&num);
    r = num%10;
    reverse = reverse*10 + r;
    num /=10;
    r = num%10;
    reverse = reverse*10 + r;
    num /=10;
    r = num%10;
    reverse = reverse*10 + r;
    printf("Reverse : %d",reverse);

}
//Enter the number :345
//Reverse : 543
