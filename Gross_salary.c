// C program to calculate Gross Salary of an employee

#include <stdio.h>

float calculate_gross_salary(float basic_salary, float da, float hra, float pf)
{
    float gross_salary;
    gross_salary = basic_salary + da + hra - pf;
    return gross_salary;
}

int main(int argc, char const *argv[])
{
    float basic_salary, da, hra, pf, gross_salary;
    char name[20];
    printf("Please enter the name of the employee:\n");
    scanf("%s", name);

    printf("Please enter the basic salary of the employee:\n");
    scanf("%f", &basic_salary);
    printf("Please enter the DA of the employee:\n");
    scanf("%f", &da);
    printf("Please enter the HRA of the employee:\n");
    scanf("%f", &hra);
    pf = (basic_salary * 12) / 100;
    printf("pf of the employee is: %.2f\n", pf);

    gross_salary = calculate_gross_salary(basic_salary, da, hra, pf);
    printf("Gross salary of the employee is: %.2f\n", gross_salary);

    return 0;
}
