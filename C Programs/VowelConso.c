#include<stdio.h>
#include <ctype.h>
void main(){
    char ch;
    printf("Enter a alphabet :");
    ch = getchar();
    if(isalpha(ch)){
        if(toupper(ch)=='A' || toupper(ch)=='E'||toupper(ch)=='I'||toupper(ch)=='O'||toupper(ch)=='U'){
            printf("This is vowel");
        }else{
            printf("This is consonent");
        }
    }else{
        printf("Enter Alphabet");
    }
}
