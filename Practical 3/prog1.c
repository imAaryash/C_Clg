#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, diff, prod, rem;
    float quo;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quo = (float)num1 / num2;
    rem = num1 % num2;

    printf("\n------------------------------\n");
    printf("        ARITHMETIC RESULTS    \n");
    printf("------------------------------\n");
    printf("Sum        : %d + %d = %d\n", num1, num2, sum);
    printf("Difference : %d - %d = %d\n", num1, num2, diff);
    printf("Product    : %d * %d = %d\n", num1, num2, prod);
    printf("Quotient   : %d / %d = %.2f\n", num1, num2, quo);
    printf("Remainder  : %d %% %d = %d\n", num1, num2, rem);
    printf("------------------------------\n");

    return 0;
}
