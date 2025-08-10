//  first what is an array 
//       when we store the no in any varaiable and then we simple formate int x = 5; this is the formate
//and when we want to store multiple numbers in a variabke we can use array to store multiple numbers

//  like this
#include<stdio.h>

int main () {
    int star[5];
    int i;

    printf("enter 5 numbers");
    for( i = 0; i <= 4 ; i++)
    {
        scanf("%d", &star[i]);
    }
    printf("user entred no");
    for(i = 0; i <= 4;i++)

    printf("%d", star[i]);

    return 0;
}