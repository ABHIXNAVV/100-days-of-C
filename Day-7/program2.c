//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main()
{
    char ch;
    printf("ENTER A CHARACTER");
    scanf("%c", &ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("IT IS A VOWEL");
    }
    else
    {
        printf("IT IS A CONSONENT");
    }

    return 0;
    
}