//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main()
{
    int n1, n2, temp;//temp being the temprary variable to swap numbers
    printf("ENTER THE TWO NUMBERS TO BE SWAPED..");
    scanf("%d %d", &n1, &n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("After swap: %d %d\n", n1, n2);

    return 0;
}