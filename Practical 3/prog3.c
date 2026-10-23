#include <stdio.h>

int main()
{
    int a = 10;
    float b = 25.5;
    char c = 'A';

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n\n", &a);

    printf("Value of b = %.2f\n", b);
    printf("Address of b = %p\n\n", &b);

    printf("Value of c = %c\n", c);
    printf("Address of c = %p\n", &c);

    return 0;
}
