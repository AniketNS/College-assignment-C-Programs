#include<stdio.h>
void main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%4d",j);
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("%4d",j);
        }
        printf("\n");
    }
}
//Enter number :6
//   1
//   1   2
//   1   2   3
//   1   2   3   4
//   1   2   3   4   5
//   1   2   3   4   5   6
//   1   2   3   4   5
//   1   2   3   4
//   1   2   3
//   1   2
//   1
