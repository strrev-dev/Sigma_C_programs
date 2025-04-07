//C program to find quotient and remainder
#include <stdio.h>
int main(){

    int dividend , quotient, remainder ,divisor;
    printf("Please enter dividend :\n");
    scanf("%d", &dividend);
    printf("Please enter divisor  :\n");
    scanf("%d", &divisor);
    // QUOTIENT = DIVIDEND / DIVISOR
    quotient = dividend / divisor;
    // REMAINDER = DIVIDEND % DIVISOR
    remainder = dividend % divisor;
    printf("Quotient = %d\n", quotient);
    printf("Reamainder = %d\n", remainder);

    return 0;
}