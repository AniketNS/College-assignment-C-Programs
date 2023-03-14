#include<stdio.h>
// #include<conio.h>
void main(){
    int prev_reading, curr_reading, unit;
    float billing;
//    clrscr();
    printf("Enter previous bill :");
    scanf("%d",&prev_reading);
    printf("Enter current reading :");
    scanf("%d",&curr_reading);
    unit = curr_reading-prev_reading;
    billing = unit*0.80;
    printf("\n Unit consumed = %d ",unit);
    printf("\n Bill = %.2f",billing);
//    getch();
}
