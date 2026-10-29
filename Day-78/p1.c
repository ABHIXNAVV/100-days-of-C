//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>

int main() {
    // Open the file in read mode
    FILE *fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: could not open text.txt\n");
        return 1;
    }

    int ch;  // int (not char) so EOF can be detected correctly
    int vowels = 0, consonants = 0;

    // Read one character at a time until EOF
    while ((ch = fgetc(fp)) != EOF ) {
        // Only letters count; digits, spaces and symbols are ignored
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
