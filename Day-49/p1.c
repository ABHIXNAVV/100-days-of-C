//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole name, including spaces
    fgets(str, sizeof(str), stdin);

    int i = 0;

    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        // Skip spaces between words
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // First letter of a word: print it as an initial
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') ch = ch - ('a' - 'A');  // make uppercase
        printf("%c.", ch);

        // Move to the end of this word
        while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r' && str[i] != ' ') {
            i++;
        }
    }
    printf("\n");

    return 0;
}
