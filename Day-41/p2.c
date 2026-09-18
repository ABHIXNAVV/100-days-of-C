//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    // Print each character on its own line, stopping at the end of the string
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
