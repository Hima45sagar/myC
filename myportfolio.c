#include<stdio.h>
#include<string.h>

int main () {

char name[20], email[50], github[20], course[20];


int age;

printf("enter your name\n");


fgets(name, sizeof(name), stdin);

printf("enetr your email\n");

fgets(name, sizeof(email), stdin);

printf("enetr your github\n");

fgets(github, sizeof(github), stdin);


printf("-------------------------------------------------------------------------\n");


printf("                    MY C PROGRAMMING PORTFOLIO                           \n");



printf("--------------------------------------------------------------------------\n");



printf("NAME    :   %s\n", name);

printf("COURSE  :   %s\n", course);

printf("EMAIL   :   %s\n", email);

printf("GITHUB  :   %s\n", github);

printf("AGE     :   %d\n", age);

printf("EDUCTION : \n");

printf("DIPLOMA | H.R.INSTITUE OF ENGINEERING AND TECHNOLOGY\n | BTEUP BOARD | 2024 - 2027");


printf("curently pursing diploma with baranch if computer science and engieneering\n");


printf("SCHOOL | GREEN LAND ACADEMY MODINAGAR\n");


printf("i will pass my 10th with cbse board in 2018\n");


printf("SKILLS :\n");

printf("c programming language\n");

prinft("function knowledge in c\n");

printf("array knowledge in c\n");

printf("pointer knowledge in c\n");


printf("function with pointer\n");


printf("PROJECT  :\n");

printf("make a simple calculator using c language\n");

printf("make a tax calculator calculate for tax of people\n");

printf("make a portfolio for every one can use\n");

printf("making a star pramid\n");




return 0;
}