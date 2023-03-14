#include<stdio.h>
void main(){
    int arr[10];
    int temp=0, pal=0, rem;
    printf("\n Enter 10 numbers greater than 9 :");
    for(int i = 0; i<10; i++){
        scanf("%d",&arr[i]);
        pal = 0;
        temp = arr[i];
        while(arr[i]>0){
            rem = arr[i]%10;
            pal = pal *10 + rem;
            arr[i] = arr[i] / 10;
        }
        if(temp == pal){
            printf("\n%d is palindrome\n",temp);
        }
        else{
            printf("\n%d is not palindrome\n",temp);
        }

    }

}
