#include <stdio.h>

void print1ToN(int n) 
{
    if (n == 0)
        return;
    print1ToN(n - 1);     
    printf("%d ", n);      
}

int main() 
{
    int n = 5;
    printf("Numbers from 1 to %d:\n", n);
    print1ToN(n);
    return 0;
}
/* Output
Numbers from 1 to 5:
1 2 3 4 5 */
