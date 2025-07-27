#include <stdio.h>

int countDigit(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit(n / 10);
}

int main()
{
    int n = 2025;
    printf("THe Number of digits in %d is : %d\n", n, countDigit(n));
    return 0;
}
/* Output:
THe Number of digits in 2025 is : 4 */
