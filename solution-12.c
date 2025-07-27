#include <stdio.h>
#include <stdbool.h>
bool prime(int n, int i)
{
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return prime(n, i + 1);
}

int main()
{
    int n = 19;
    if (prime(n, 2))
        printf("%d is prime.\n", n);
    else
        printf("%d is not prime.\n", n);
    return 0;
}
/* Output:
19 is prime. */
