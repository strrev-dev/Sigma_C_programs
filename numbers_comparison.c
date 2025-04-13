// C program to find Largest Number among three numbers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
     printf("Please enter the first number : \n");
     scanf("%d", &num1);
        printf("Please enter the second number : \n");
        scanf("%d", &num2);
        printf("Please enter the third number : \n");
        scanf("%d", &num3);
        // if num1 is greater than num2 and num3
        do
        {
         
            if (num1>num2 && num1 > num3)
            {
                /* code */printf("The largest number is %d\n", num1);
    
            }
            else if (num2> num1 && num2 > num3)
            {
                /* code */printf("The largest number is %d\n", num2);
            }
            else{
                printf("the largest number is %d\n", num3);
            }
            
        } while(0);
        if (num1 == num2 && num1 == num3)
        {
            printf("All numbers are equal\n");
        }
        else if (num1 == num2)
        {
            printf("The first and second numbers are equal\n");
        }
        else if (num1 == num3)
        {
            printf("The first and third numbers are equal\n");
        }
        else if (num2 == num3)
        {
            printf("The second and third numbers are equal\n");
        }
        
        

    return 0;
}
