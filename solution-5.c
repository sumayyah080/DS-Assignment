#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int a = 2, b = 4;
    printf("%d raised to the power %d is = %d\n", a, b, power(a, b));
    return 0;
}
/* Output:
2 raised to the power 4 is = 16 */
