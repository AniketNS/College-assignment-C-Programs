#include<stdio.h>
void main(){
    int sub1,sub2,sub3,sub4,sub5,total;
    float perc;
    printf("Enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total = sub1+sub2+sub3+sub3+sub4+sub5;
    perc = total/5;
    if(perc>=70){
        printf("Distinction");
    }else if(perc>=60){
        printf("First Class");
    }else if(perc>=50){
        printf("Second class");
    }else if(perc>=35){
        printf("Pass");
    }else{
        printf("Fail");
    }
}
//Enter marks of 5 subjects89
//78
//80
//82
//75
//Distinction
