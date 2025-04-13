// Given an integer number , we have to check whether it is eve or odd.
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;
     printf("Please enter the number  : \n");
     scanf("%d", &number);

     if (number%2 ==0)
     {
        printf("The numbber %d is even\n",number);

     }
     else{
        printf("The number % d iis odd\n", number);
     }
     
    return 0;
}

