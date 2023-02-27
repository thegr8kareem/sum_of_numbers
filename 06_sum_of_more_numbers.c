#include <stdio.h>

int main()
{
    int i = 8;
    int n = 1;
    int m = 0;
    int j;

    for (n = 1; n <= 10; n++)
    {
        j = n * i;
        m += j;
    }
    printf("The results for the sum of the 8 times table is %d\n", m);
    return 0;
}