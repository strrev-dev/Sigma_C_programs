// C program to print ASCII value of a character

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Please enter a character\n");
    scanf(" %c", &ch);  // Added space before %c

    // Print the ASCII value of the character
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
