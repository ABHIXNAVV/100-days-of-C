//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>


int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    int seen[26] = {0};  // seen[0] is for 'a', seen[1] for 'b', ...
    int found = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = str[i];

        // Only lowercase letters are considered
        if (ch >= 'a' && ch <= 'z') {
            if (seen[ch - 'a'] == 1) {
                // Second time we meet this letter: it's the first repeat
                printf("%c\n", ch);
                found = 1;
                break;
            }
            seen[ch - 'a'] = 1;
        }
    }

    if (!found) {
        printf("No repeating character\n");
    }

    return 0;
}


