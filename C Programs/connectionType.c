#include<stdio.h>
void main(){
    char conn_type;
    int curr_reading,prev_reading;
    int total;
    float bill=0;
    printf("Enter you connection type(r/c) :");
    scanf("%c",&conn_type);
    printf("Enter current reading :");
    scanf("%d",&curr_reading);
    printf("Enter previous reading :");
    scanf("%d",&prev_reading);
    total = curr_reading-prev_reading;

    switch (conn_type) {
            case 'r':
                if (total <= 100) {
                    bill += total * 0.8;
                } else if (total <= 200) {
                    bill += 80 + (total - 100) * 1.2;
                } else {
                    bill += 200 + (total - 200) * 1.5;
                }
                break;
            case 'c':
                if (total <= 100) {
                    bill += total * 1.2;
                } else if (total <= 200) {
                    bill += 120 + (total - 100) * 1.8;
                } else {
                    bill += 200 + 250 + (total - 200) * 3;
                }
                break;
            default:
                printf("Enter valid operator");
        }
    printf("Bill =%.2f",bill);
}
//Enter you connection type(r/c) :c
//Enter current reading :605
//Enter previous reading :335
//Bill =660.00

//Enter you connection type(r/c) :r
//Enter current reading :450
//Enter previous reading :230
//Bill =230.00
