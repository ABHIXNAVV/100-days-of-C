 //Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line
    fgets(str, sizeof(str), stdin);

    // Find the length (without the newline)
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }

    int first = 1;  // helps avoid a comma before the first substring

    // i = starting index, j = ending index of the substring
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            first = 0;

            // Print characters from index i to index j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;
}
