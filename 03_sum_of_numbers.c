#include <stdio.h>

int main()
{
    int i = 0;
    int n = 1;

    // printf("Enter the number of natural numbers you want to add: \n");
    // scanf("%d",&i);

    while (n <= 10)
    {
        i += n; 
        n++;
        // i++;
    }
    printf("The sum of the first ten natural numbers is %d\n", i);
    return 0;
}