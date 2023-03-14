#include<stdio.h>
#include<conio.h>
void main(){
    int n, sum = 0;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    printf("Sum is %d", sum);
}