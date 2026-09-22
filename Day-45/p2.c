//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Lowercase to uppercase
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Uppercase to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
        // Digits, spaces and symbols stay unchanged
    }

    // Print the string character by character, stopping before the newline
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
