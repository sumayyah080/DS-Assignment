#include <stdio.h>

int sumN(int n)
{
    if (n == 0)
        return 0;
    return n + sumN(n - 1);
}

int main()
{
    int n = 5;
    printf("Sum of %d natural numbers is : %d\n", n, sumN(n));
    return 0;
}
/* Output
Sum of 5 natural numbers is : 15 */
