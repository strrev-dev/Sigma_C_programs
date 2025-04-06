//C program to find cube of an integer number using two different methods
#include <stdio.h>
#include <math.h>
// Function to calculate power
int Pow(int base, int exp){
    int result = 1;// Initialize result to 1
    // Loop to calculate power
    for(int i = 0;  i < exp; i++){
        result *= base;
    }
    return result;
}
int main(){
    int num, cube;
    printf("Please enter the number whose cube you want to find\n");
    scanf("%d", &num);
    // Method 1: Using multiplication
    cube = num *num *num;
    printf("The cube of %d is %d\n", num,cube);
    // Method 2: Using pow function
    cube = Pow(num,3);
    printf("The cube of %d is %d\n", num,cube);
    // Method 3: Using bitwise operator
    cube = num <<4; // left shift by 3 bits is equivalent to multiplying by 16

    printf("The cube of %d is %d\n", num,cube);

    return 0;
}