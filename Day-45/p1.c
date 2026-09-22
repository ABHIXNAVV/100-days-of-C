//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[1000];
    char target;

    // Read the whole line (first line of input)
    fgets(str, sizeof(str), stdin);

    // Read the character to search for (second line of input)
    // The leading space in " %c" skips any leftover whitespace/newline
    scanf(" %c", &target);

    int count = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
