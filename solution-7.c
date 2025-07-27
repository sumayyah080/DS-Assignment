#include <stdio.h>
int sumDigit(int n) 
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigit(n / 10);
}

int main() 
{
    int n = 2025;
    printf("The Sum of digits of %d is: %d\n", n, sumDigit(n));
    return 0;
}
/* Output:
The Sum of digits of 2025 is: 9 */

