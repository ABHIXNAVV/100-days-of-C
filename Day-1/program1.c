// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int n1,n2;
    printf("ENTER THE TWO NUMBERS");
    scanf("%d %d", &n1 , &n2);
    int sum = n1 + n2;
    printf("THE SUM OF TWO NUMBERS IS %d\n", sum);
    return 0;
}