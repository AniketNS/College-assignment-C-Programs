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
            printf("This is consonant");
        }
    }else{
        printf("Enter Alphabet");
    }
}
//Enter a alphabet :f
//This is consonant

//Enter a alphabet :e
//This is vowel
