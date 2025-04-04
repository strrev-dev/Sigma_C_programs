// wriite the progoram to  find the sum and average of two numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  num1, num2, sum;
    float avg;
    printf("please enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    avg = sum / 2.0; // to get the average in float, we need to divide by 2.0 instead of 2
    printf("The sum of two numbers is %d\n", sum);
    return 0;
}


