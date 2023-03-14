#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    char gender;
    int age;
    printf("Enter marital Status(M/U) :");
    // getchar(ch);
    scanf("%c",&ch);
    fflush(stdin);
    if(toupper(ch)== 'M'){
        printf("You are eligible for Driving");
    }else{
        printf("Enter Your gender(M/F) :");
        // getchar(gender);
        fflush(stdin);
        scanf("%c",&gender);
        if(toupper(gender)=='M'){
            printf("Enter your age:");
            scanf("%d",&age);
            if(age>=18){
                printf("You are eligible for Driving");
            }else{
                printf("You are not eligible for Driving");
            }
        }else{
            printf("Enter your age:");
            scanf("%d",&age);
            if(age>=20){
                printf("You are eligible for Driving");
            }else{
                printf("You are not eligible for Driving");
            }
        }
    }
}
//Enter marital Status(M/U) :u
//Enter Your gender(M/F) :f
//Enter your age:18
//You are not eligible for Driving
