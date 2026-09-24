//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[1000];
    char longest[1000] = "";

    // fgets reads the whole sentence, including spaces
    fgets(str, sizeof(str), stdin );

    int maxLen = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        // Skip spaces between words
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // Found the start of a word: measure it
        int start = i;
        int len = 0;
        while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r' && str[i] != ' ') {
            len++;
            i++;
        }

        // Keep the word if it is longer than the best so far
        if (len > maxLen) {
            maxLen = len;
            for (int k = 0; k < len; k++) {
                longest[k] = str[start + k];
            }
            longest[len] = '\0';
        }
    }

    printf("%s\n", longest);

    return 0;
}
