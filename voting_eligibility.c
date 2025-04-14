// C program to check whether a person is eligible for voting or not?

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age<18)
    {
       printf("Your are not eligible for voting.\n");
    }
    else if (age>=18 && age<=100)
    {
        printf("You are eligible for voting.\n");
    }
    else if (age>100)
    {
        printf("Please enter a valid age.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
    
    return 0;
}
