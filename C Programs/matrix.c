#include<stdio.h>
void main(){
    int max;
    int two_dimensional_arr[][]= {{4,5,2,34},
                {23,5,12,5},
                {12,53,5,2}};
    for (int i = 0; i < 3; i++) {
            max=two_dimensional_arr[i][0];
            for (int j = 0; j < 3; j++) {
                if(max<two_dimensional_arr[i][j+1]){
                    max=two_dimensional_arr[i][j+1];
                }
            }
            arr[i]=max;
        }
        for (int i = 0; i < 3; i++) {
            printf("%d",arr[i]);
        }
}
