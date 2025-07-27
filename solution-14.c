#include <stdio.h>
int maxarr(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int maxarr2 = maxarr(arr, n - 1);
    return (arr[n - 1] > maxarr2) ? arr[n - 1] : maxarr2;
}

int main()
{
    int arr[] = {3, 7, 2, 9, 5};
    int size = 5;
    printf("Maximum element is : %d\n", maxarr(arr, size));
    return 0;
}
/* Output:
Maximum element is : 9 */
