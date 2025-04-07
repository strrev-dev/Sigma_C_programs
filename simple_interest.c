//C program to calculate Simple Interest

#include <stdio.h>
int main(){

    int principal, rate , time;
    double simple_interest;
    printf("Please enter Princippal value :\n");
    scanf("%d", &principal);
    printf("Please enter Rate of interest :\n");
    scanf("%d", &rate);
    printf("Please enter Time in years :\n");
    scanf("%d", &time);
    //SIMPLE INTEREST = (PRINCIPAL * RATE * TIME) / 100
    simple_interest = principal*rate*time/ 100.0;
    printf("simple interest = %lf\n", simple_interest);
    printf( "total amount = %lf\n", principal + simple_interest);

    return 0;

}