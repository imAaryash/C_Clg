#include <stdio.h>

int main()
{
    float sub1, sub2, sub3;
    float total, avg;

    printf("Enter marks of subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", avg);

    return 0;
}
