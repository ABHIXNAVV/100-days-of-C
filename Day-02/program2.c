//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
#define PI 3.1415
int main()
{
float area,radius,circum;
printf("ENTER THE RADIUS\n");
scanf("%f", &radius);
area = PI*radius*radius;
printf("the area of circle is %3f\n", area);
circum = 2 * PI * radius;
printf("the circumference of the circle is %2f\n", circum);
return 0;
}

