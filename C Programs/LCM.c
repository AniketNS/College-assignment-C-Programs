#include<stdio.h>
void main(){
    int lcm = 0,n1,n2,i;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    if(n1%2==0 && n2%2==0){
        lcm=2;
    }else{
        i=3;
        while(i<=n1 || i<=n2){
            if(n1%i==0 && n2%i==0){
                lcm = i;
            }
            i+=2;
        }
    }
    if(lcm==0){
        printf("No LCM found");
    }else{
        printf("LCM of %d and %d is = %d",n1,n2,lcm);
    }
}
//Enter two numbers :9
//18
//LCM of 9 and 18 is = 9
