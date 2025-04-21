// C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit.

#include <stdio.h>

float temperature, fahrenheit, celsius;
void converttofahrenheit(float celsius)
{
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return fahrenheit;
}
void converttocelsius(float fahrenheit)
{
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", celsius);
    return celsius;
}
int main(int argc, char const *argv[])
{
    int choice;
    printf("Enter 1 to convert Celsius to Fahrenteit\n");
    printf("Enter 2 to convert Fahrenheit to Celsius\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter temperture in Celsius:");
        scanf("%f", &temperature);
        converttofahrenheit(temperature);

    case 2:
        printf("Enter temperature in Fahrenheit:");
        scanf("%f", &temperature);
        converttocelsius(temperature);
        break;
    default:
        printf("Invalid choice\n");
        break;
        return 0;
    }
}
