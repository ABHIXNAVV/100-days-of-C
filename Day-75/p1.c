//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    char text[1000];

    // Read the line of text to append (fgets keeps spaces)
    fgets(text, sizeof(text), stdin);

    // Remove the newline that fgets stores at the end
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n' || text[i] == '\r') {
            text[i] = '\0';
            break;
        }
    }

    // Open the file in append mode
    FILE *fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error: could not open data.txt\n");
        return 1;
    }

    // Start on a new line, then write the text
    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
