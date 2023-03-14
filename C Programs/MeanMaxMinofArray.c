#include<stdio.h>
void main(){
    int arr[10],sum=0,max,min,mean;
    printf("Enter 10 numbers :");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<9;i++){
        if(max<arr[i+1]){
            max=arr[i+1];
        }
    }
    for(int i=0;i<9;i++){
        if(min>arr[i+1]){
            min=arr[i+1];
        }
    }

    mean = sum/10;
    printf("Minimum element in array is :%d\n",min);
    printf("Maximum element in array is :%d\n",max);
    printf("Mean of the array is :%d\n",mean);
}
//Enter 10 numbers :34
//23
//43
//23
//45
//62
//43
//62
//72
//34
//Minimum element in array is :23
//Maximum element in array is :72
//Mean of the array is :44
