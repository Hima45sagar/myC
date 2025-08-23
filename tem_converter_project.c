#include<stdio.h>



int main () {

    float temp, converted;
    int choice;


    printf("--------------------------------------------------\n");
    printf("               welcome to temp converter          \n");
    printf("--------------------------------------------------\n");

    printf("\n1 : celcius to farhenite");
    printf("\n2 : farhenite to celcius");
    printf("\n3 : celcius to kelvin");
    printf("\n4 : kelvin to celcius");
    printf("\n5 : kelvin to farhenite");
    printf("\n5 : farhenite to kelvin");

    printf("enter your choice (1 to 6)");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
        printf("enter the temp");
        scanf("%f", &temp);

        converted = (temp * 9.0/5.0) + 32;

        printf("farhenite temp is : %.2f", converted);
        break;

        case 2:
        printf("enetr the temp");
        scanf("%f", &temp);

        converted = (temp * 5.0/9.0) - 32;

        printf("celcius temp is : %.2f", converted);
        break;

        case 3:
        printf("enter the temp");
        scanf("%f", &temp);

        converted = temp + 273.15;

        printf("kelvin temp is : %.2f", converted);
        break;


        case 4:
        printf("enter the temp");
        scanf("%f", &temp);

        converted = temp - 273.15;

        printf("celcius tem is : %.2f", converted);
        break;

        case 5:
        printf("enter the temp");
        scanf("%f", &temp);
            converted = (temp - 273.15) * 9.0 / 5.0 + 32;
    

        printf("farhenite temp id : %.2f", converted);
        break;

        case 6:
        printf("enter the temp");
        scanf("%f", &temp);
        converted = (temp - 32) * 5.0 / 9.0 + 273.15;
    

        printf("kelvin temp is : %.2f", converted);
        break;

        default :
        printf("incorrect choice plese try again");
        break;
    }
         return 0;

}
