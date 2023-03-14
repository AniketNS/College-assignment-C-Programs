#include<stdio.h>
#include<conio.h>
void main(){
    int num=4;
    int* ptr=&num;
    clrscr();
    /*
    printf("Enter a number :");
    scanf("%d",&num);
    ptr = multtable(num);
    for(int i=0; i<=10;i++){
        printf("%d",*(ptr[i]))
    }
    */
    printf("%d",ptr);
    printf("Hello World:");
    getch();
}
