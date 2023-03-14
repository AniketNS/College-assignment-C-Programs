#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(toupper(ch)=='A' || toupper(ch)=='E'||toupper(ch)=='I'||toupper(ch)=='O'||toupper(ch)=='U'){
            printf("This is vowel");
        }else{
            printf("This is consonant");
        }
    }else if(isdigit(ch)){
        if(ch%2 == 0){
            printf("It is Even number");
        }else{
            printf("It is odd number");
        }
    }else{
        printf("It is a special character");
    }
}
//Enter the character :6
//It is Even number
//Enter the character :&
//It is a special character
