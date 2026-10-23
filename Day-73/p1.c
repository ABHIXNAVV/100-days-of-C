//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main() {
    // Open the file in read mode
    FILE *fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: could not open sample.txt\n");
        return 1;
    }

    int ch;
    int lastChar = '\n';   // remembers the previous character
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;        // 1 while we are inside a word

    // Read one character at a time until EOF
    while ((ch = fgetc(fp)) != EOF ) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        // A word is a run of non-space characters
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;       // a new word starts here
        }

        lastChar = ch;
    }

    // If the file doesn't end with a newline, the last line is still a line
    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
