#include <stdio.h>

int main()
{
    int i = 0;
    int n = 1;

    do 
    {
        i += n;
        n++;

        if (n == 11)
        {
            printf("The sum of the first ten natural numbers is %d\n",i);
        }

    } while(n <= 10);
    return 0;
}