#include<stdio.h>
#include<string.h>

void patientname(char name[]);

void patientid();

void patientage();

void discount();

void patientbill();

int main () {
    char name[20];

    printf("-----------------------------------------------------\n");

    printf("                    patient record                   \n");

    printf("-----------------------------------------------------\n");

    printf("enter patient name");
    fgets(name,sizeof(name), stdin);

    patientname(name);

    patientid();

    patientage();

    discount();

    patientbill();

    

    return 0;

}

    void patientname( char name[]) {

        printf("patient name is : %s", name);

    }

    void patientid(void) {

        int id;

        printf("enter patient id");
        scanf("%d", &id);

        printf("patient id number is : %d\n", id);

    }

    void patientage(void) {

        int age;

        printf("enter the age");
        scanf("%d", &age);

        printf("patient age is : %d", age);
    }

    void discount(void) {

        int age;

        printf("enter the age of patient");

        scanf("%d", &age);

        if(age > 25)
        {
            printf("extra discount");
        }
        else{
            printf("no discount available");
        }
    }


        void patientbill(void) {

            int medicine_bill, hospital_rent[5];
            int total, i, sum = 0;
            
            printf("enter total medecine bill");
            scanf("%d", &medicine_bill);

            printf("enter 5 days hospital rent");
            for(i = 0; i < 5; i++)
          {
            printf("enter 5 days bill %d", i + 1);
            scanf("%d", &hospital_rent[i]);
            sum += hospital_rent[i];
          }

            total = medicine_bill + sum ;

            printf("total bill of patient is : %d", total);
        }



    
