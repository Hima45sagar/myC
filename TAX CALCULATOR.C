#include<stdio.h>

int main () {
    float income, tax;

    printf("--------------------------------------------------------------\n");

    printf("                welcome to tax calculator                     \n");

    printf("---------------------------------------------------------------\n");

    printf("\nenter your income");
    scanf("%f", &income);

    if(income <= 250000)
    {
        tax = 0;
    }

    else if(income <= 500000)
    {

        tax = (income - 250000) * 0.05;

       }

      else if(income <= 1000000)
       {

        tax = (2500000 * 0.05) + (income - 500000) * 0.2;

       }

       else if(income <= 1500000)
       {

           tax = (250000 * 0.05) + (500000 * 0.2) + (income - 1000000) * 0.3;
       }
       else
       {

           tax = ( 2500000 * 0.05) + (5000000 * 0.2 ) + (1000000 * 0.3) + (income - 1500000)* 0.4;
           
       }

       printf("tax is : %.2f", tax);

       return 0;
}

