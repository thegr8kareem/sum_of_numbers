#include <stdio.h>

int main()
{
    int i = 0;
    int n ;
    // printf("Enter the number you want to use for this table: \n");
    // scanf("%d\n", &n);

    for (n = 1; n <= 10 ; n++)
    {
        i += n;
    }
    return 0;
    printf("The sum of the first ten natural numbers is %d\n",i);
}