//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    int count = 0;

    // Count until the newline or the end of the string
    while (str[count] != '\0' && str[count] != '\n' && str[count] != '\r') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}