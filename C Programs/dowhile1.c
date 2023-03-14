#include<stdio.h>
#include<conio.h>
int* multtable(int);
void main(){
    printf("Hello World!");
    int num;int i;
    int* ptr;
    printf("Enter a number :");
    scanf("%d",&num);
    ptr = multtable(num);
    for( i=0; i<10;i++){
        printf("\n%d",*(ptr+i));
    }
}
int* multtable(int n){
    static int arr[10];
    int j=0;
    int i;
    for(i=1;i<=10;i++){
        arr[j] = n*i;
        j++;
    }
    return arr;
}
