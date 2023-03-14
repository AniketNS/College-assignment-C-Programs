#include<stdio.h>
#include<conio.h>
void main(){
     float basicSalary, da, hra, grossSalary, tax, netPay;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    da = 0.6 * basicSalary;
    hra = 0.45 * basicSalary;
    grossSalary = da + hra;
    tax = 0.25 * grossSalary;
    netPay = grossSalary - tax;
    printf("Basic salary = %.2f\n", basicSalary);
    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("Gross salary = %.2f\n", grossSalary);
    printf("Tax = %.2f\n", tax);
    printf("Net pay = %.2f\n", netPay);
    getch();
}
