//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    int newWord = 1;  // 1 when the next letter starts a new word

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == ' ') {
            newWord = 1;  // a space means the next character starts a word
        } else {
            if (newWord) {
                // First character of a word: make it uppercase
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - ('a' - 'A');
                }
                newWord = 0;
            } else {
                // Rest of the word: make it lowercase
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + ('a' - 'A');
                }
            }
        }
    }

    // Print the string, stopping before the newline
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
