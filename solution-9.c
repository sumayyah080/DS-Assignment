#include <stdio.h>
#include <string.h>

void reverseStr(char str[], int start, int end)
{
    if (start >= end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseStr(str, start + 1, end - 1);
}

int main()
{
    char str[] = "Right";
    reverseStr(str, 0, strlen(str) - 1);
    printf("Reversed string is : %s\n", str);
    return 0;
}
/* Output:
Reversed string is : thgiR */
