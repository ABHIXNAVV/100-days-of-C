//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>

int main() {
    // Open input.txt for reading and output.txt for writing
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: could not open input.txt\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: could not create output.txt\n");
        fclose(in);
        return 1;
    }

    int ch;  // int (not char) so EOF can be detected correctly

    // Read one character at a time until EOF
    while ((ch = fgetc(in)) != EOF) {
        // Convert only lowercase letters; everything else is copied as it is
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Converted text written to output.txt\n");

    return 0;
}
