//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    // Find the length (without counting the newline)
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }

    // Print characters from the last index back to the first
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
