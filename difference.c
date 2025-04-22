
// C program to find the difference of two numbers

#include <stdio.h>

int main (){

    float num1, num2, difference;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    difference = num1 - num2;
    printf("the difference of %.2f and %.2f is %.2f\n", num1, num2, difference);
}