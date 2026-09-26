//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole sentence, including spaces
    fgets(str, sizeof(str), stdin );

    int i = 0;

    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        // Keep spaces exactly as they are
        if (str[i] == ' ') {
            printf(" ");
            i++;
            continue;
        }

        // Found the start of a word: find where it ends
        int start = i;
        while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r' && str[i] != ' ') {
            i++;
        }
        int end = i - 1;

        // Print the word backward
        for (int k = end; k >= start; k--) {
            printf("%c", str[k]);
        }
    }
    printf("\n");

    return 0;
}
