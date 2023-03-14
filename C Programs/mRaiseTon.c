#include<stdio.h>
void main(){
    int n,m,ans=1;
    printf("Enter m and n :");
    scanf("%d%d",&m,&n);
    while(n>0){
        ans *= m;
        n--;
    }
    printf("%d",ans);

}
//Enter m and n :8
//3
//512
