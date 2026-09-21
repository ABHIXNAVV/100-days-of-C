//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        // Replace each space with a hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    // Print the string character by character, stopping before the newline
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
