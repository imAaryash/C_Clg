#include <stdio.h>

int main()
{
    float basic_salary, total_salary;
    float bonus = 3000.0;

    printf("Enter basic salary of employee: ");
    scanf("%f", &basic_salary);

    total_salary = basic_salary + bonus;

    printf("Fixed Bonus = %.2f\n", bonus);
    printf("Total Salary = %.2f\n", total_salary);

    return 0;
}
