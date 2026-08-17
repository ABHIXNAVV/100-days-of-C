//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    float length , breadth;
    printf("ENTER LENGTH AND BREADTH OF RECTANGLE");
    scanf("%f %f", &length , &breadth);

    float area = length*breadth;
    printf("THE AREA OF RECTANGLE IS %f\n", area);

    float perimeter = 2*(length + breadth);
    printf("THE PERIMETER OF RECTANGLE IS %f\n", perimeter);
    return 0;
}
