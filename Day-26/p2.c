/*Nested Loops Pattern
*
 
***
 
*****
 
***
 
* */
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n\n");
    }

    for (i = 2; i >= 1; i--)
    {
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n\n");
    }

    return 0;
}