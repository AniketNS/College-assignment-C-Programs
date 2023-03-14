#include<stdio.h>

void main(){
    int n,i,fact=1;
    int opt;

    do{
        printf("\nEnter a number :");
        scanf("%d",&n);
        printf("\nEnter 1 to check Number is even or odd :");
        printf("\nEnter 2 if you want Multiplication table to given number :");
        printf("\nEnter 3 if you want factorial of given number :");
        printf("\nEnter 4 to check given no. is prime or not :");
        scanf("%d",&opt);
        if(opt > 4){
            printf("\nEnter valid input!");
        }
        switch (opt){
        case 1:
            if(n%2==0){
                printf("\nNumber is Even");
            }else{
            printf("\nNumber is Odd");
            }
            break;
        case 2:
            i=1;
            while(i<=10){
                printf("\n%d",n*i);
                i++;
            }
            break;
        case 3:
            for(int i = 1; i<=n;i++){
                fact = fact * i;
            }
            printf("%d",fact);
            break;
        case 4:
            if (n <= 1) {
                printf("\nEnter number greater than 1");
            }
            else if(n>1){
                for (int i = 2; i < n; i++) {
                    if (n % i == 0) {
                        printf("\nNumber is not prime");
                    }
                }
            }else{
                printf("\nNumber is prime");
            }

            break;
        }
        /*
        if(opt == 1){
            if(n%2==0){
                printf("Number is Even");
            }else{
            printf("Number is Odd");
            }

        }
        else if(opt == 2){
                i=1;
            while(i<=10){
                printf("\n%d",n*i);
                i++;
            }
        }
        else if(opt == 3){
            for(int i = 1; i<=n;i++){
                fact *= i;
            }
            printf("%d",&fact);
        }
        else if(opt = 4){
            if (n <= 1) {
                printf("Enter number greater than 1");
            }
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    printf("Number is not prime");
                }
            }
            printf("Number is prime");
        }
        */
    }while(n!=0);
}
