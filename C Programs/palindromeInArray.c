#include<stdio.h>
void main(){
    int arr[10],reverse,r,pal;
    printf("Enter 10 integers :");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
            pal=0;
        reverse=arr[i];
        while(arr[i]>0){
            r=arr[i]%10;
            pal = pal*10+r;
            arr[i]/10;
        }
        if(pal==reverse){
            printf("%d is a palindrome number",arr[i]);
        }
    }
}
