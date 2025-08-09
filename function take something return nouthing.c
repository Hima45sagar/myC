#include<stdio.h>

void add(int, int);

void substract(int, int);

void multiple(int, int);

int main () {
    int num1, num2;

    printf("enter two numbers");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);

    return 0;
}

void add(int a, int b) {
    int sum;

    sum = a + b;

    printf("sum is %d and %d : %d", sum);

}

void substract(int a, int b) {
    int substract;

    substract = a - b;

    printf("substract is %d and %d : %d", substract);
}

void multiple(int a, int b) {
    int multiple;

    multiple = a * b;

    printf("multiple is %d and %d : %d", multiple);
}
