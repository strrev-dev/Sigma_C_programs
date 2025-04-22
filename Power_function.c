// C program to calculate X^N (X to the power of N) using pow function

#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    float x , n , result;

printf("Please enter the value of x: ");
scanf("%f", &x);
printf("Please enter the value of  n : ");
scanf("%f", &n);
result = pow(x, n);

printf("The value of %.2f ^ %.2f = %.2f\n", x, n , result);
    return 0;
}
