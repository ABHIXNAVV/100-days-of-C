//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main()
{
    float temp;//temperatue in celsius
    printf("ENTER THE TEMPERATURE IN DEGREE CELSIUS.\n");
    scanf("%f", &temp);
    float tempf;//temperature in ferenhite 
    tempf = (9.0/5.0) * temp + 32;
    printf("THE TEMPERATURE IN FERENHITE IS %f\n", tempf);

    return 0;
}