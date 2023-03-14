#include<stdio.h>
void main(){
    int arr[10],neg,pos;
    printf("Enter 10 integers :");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]>0){
            pos++;
        }
    }
    printf("you entered %d negative integers and %d positive integers",neg,pos);

}
