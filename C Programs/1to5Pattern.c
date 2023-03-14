#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%2d",i);
        }
        printf("\n");
    }

}
//Enter number :5
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
