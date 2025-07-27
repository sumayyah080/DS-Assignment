#include <stdio.h>

void printNto1(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    printNto1(n - 1);
}

int main() {
    int n = 5;
    printf("Numbers from %d to 1:\n", n);
    printNto1(n);
    return 0;
}
/* output
Numbers from 5 to 1:
5 4 3 2 1 */
