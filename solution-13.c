#include <stdio.h>

int sumArr(int arr[], int n) 
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArr(arr, n - 1);
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("The Sum of array elements is : %d\n", sumArr(arr, size));
    return 0;
}
/* Output:
The Sum of array elements is : 15 */
