// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole name, including spaces
    fgets(str, sizeof(str), stdin);

    // Find the end of the name (ignoring the newline)
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }

    // Ignore trailing spaces so the surname is found correctly
    while (len > 0 && str[len - 1] == ' ') {
        len--;
    }

    // Find where the last word (the surname) starts
    int surnameStart = len;
    while (surnameStart > 0 && str[surnameStart - 1] != ' ') {
        surnameStart--;
    }

    // Print the initial of every word before the surname
    int i = 0;
    while (i < surnameStart) {
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
        while (i < surnameStart && str[i] != ' ') {
            i++;
        }
    }

    // Print a space, then the surname in full
    if (surnameStart > 0) printf(" ");
    for (int k = surnameStart; k < len; k++) {
        printf("%c", str[k]);
    }
    printf("\n");

    return 0;
}
