#include<stdio.h>

void add(void);  // this is all are function decleration it means we declare the function

void substract(void); 

void multiple(void);

int main () {


    add();

    substract();             // they both of three type this is called call function 
   
    multiple();
    
    return 0;

}

void add(void) {          // void is generally use for because this is return nouthing in the function decleration.
    int x, y;

    int sum;

    printf("enter two number");

    scanf("%d %d", &x, &y);         // scanf use for take the input by the user.

    sum = x + y;

    printf("sum is %d and %d : %d", sum);

}

    void substract(void) {         // after substrat void we use because they can not take any thing in this function decleration.
        int num1, num2;
        int substract;

        printf("enter two numbers"); // this all are fuction defination we use for code running

        scanf("%d %d", &num1, &num2);

        substract = num1 - num2;

        printf("substract is %d and %d : %d", substract);

    }

    void multiple(void) {
        int num3, num4;
        int multiple;

        printf("enter two numbers");

        scanf("%d %d", &num3, &num4);

            multiple = num3 * num4;

            printf("multiple is %d and %d : %d", multiple);
    }