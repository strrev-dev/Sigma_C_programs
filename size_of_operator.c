// C program to print size of variables using sizeof() operator.

#include <stdio.h>

int main(){

    int a  = 33;
    float b = 3.90;
    char c  = 'A';
    double d = 3.28294;

    printf("size of int = %d bytes\n", sizeof(a));
    printf("size of float = %d bytes\n", sizeof(b));
    printf("size of char = %d bytes\n", sizeof(c));
    printf("size of double = %d bytes\n", sizeof(d));

    return 0;
}