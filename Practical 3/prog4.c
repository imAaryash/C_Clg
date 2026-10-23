#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of double: %lu bytes\n", sizeof(double));

    printf("\nSize using variables:\n");
    printf("Size of variable a (int): %lu bytes\n", sizeof(a));
    printf("Size of variable b (float): %lu bytes\n", sizeof(b));
    printf("Size of variable c (char): %lu bytes\n", sizeof(c));
    printf("Size of variable d (double): %lu bytes\n", sizeof(d));

    return 0;
}
