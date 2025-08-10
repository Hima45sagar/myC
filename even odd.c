#include<stdio.h>
int main () {
    int i;
    
    printf("enetr the number");

    scanf("%d", &i);

    while(i<=10) {  // while loop is also a type of loop and we also write the condition in the loop.

        if(i % 2 == 0) 

            printf("even\n");

        else
         printf("odd\n");

        i++;
    }
 

int j;
printf("enter the number");
scanf("%d", &j);

for(j = 1; j<=10; j++) {   // start a loop from 1 to 10 after the condition is nit false the loop is continously work.

    if(j % 3 == 0) // we withe the condition in if when j % 3 and give zero is true aother wass is false and run else
    {
        printf("odd\n");

    }
    else {

        printf("even\n");
    }
}
   return 0;
}

