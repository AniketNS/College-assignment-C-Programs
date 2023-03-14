
#include<stdio.h>
void main(){
    int n,num,sum=0;
    printf("Enter how many numbers you gonna add :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the number :");
        scanf("%d",&num);
        sum += num;
    }
    printf("Sum of numbers is :%d",sum);
}

//Enter how many numbers you gonna add :5
//Enter the number :34
//Enter the number :2
//Enter the number :3
//Enter the number :34
//Enter the number :23
//Sum of numbers is :96
