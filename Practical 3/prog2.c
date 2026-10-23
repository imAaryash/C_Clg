#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2, d = 8, e = 4;
    int result1, result2;

    printf("Values: a = %d, b = %d, c = %d, d = %d, e = %d\n\n", a, b, c, d, e);

    result1 = a + b * c - d / e;
    printf("Expression: a + b * c - d / e\n");
    printf("Step 1 (b * c): 5 * 2 = %d\n", b * c);
    printf("Step 2 (d / e): 8 / 4 = %d\n", d / e);
    printf("Step 3 (a + 10 - 2): 10 + 10 - 2 = %d\n", a + (b * c) - (d / e));
    printf("Final Result = %d\n\n", result1);

    result2 = (a + b) * (c - d) / e;
    printf("Expression with brackets: (a + b) * (c - d) / e\n");
    printf("Result with brackets = %d\n", result2);

    return 0;
}
