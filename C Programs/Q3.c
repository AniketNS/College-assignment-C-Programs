#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter number :");
    scanf("%d",&num);
    sum = sum + num%10;
    num /= 10;
    sum += num%10;
    num /= 10;
    sum += num%10;
    printf("%d",sum);
    getch();
}
//Enter number :654
//15
