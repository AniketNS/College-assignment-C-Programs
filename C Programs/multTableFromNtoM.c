#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);
    for(int i=num1;i<=num2;i++){
            for(int j=1;j<=10;j++){
                printf("%4d",i*j);
            }
            printf("\n");
    }
}
//Enter two numbers :2
//6
//   2   4   6   8  10  12  14  16  18  20
//   3   6   9  12  15  18  21  24  27  30
//   4   8  12  16  20  24  28  32  36  40
//   5  10  15  20  25  30  35  40  45  50
//   6  12  18  24  30  36  42  48  54  60
