//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>

int main() {
    char s[1000];

    // fgets reads the whole line, including spaces
    fgets(s, sizeof(s), stdin);

    // Find the length (without the newline)
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') {
        len++;
    }

    // lastSeen[c] = index where character c was last seen (-1 if never)
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int start = 0;    // left end of the current window
    int maxLen = 0;

    for (int i = 0; i < len; i++) {
        unsigned char ch = s[i];

        // If ch was seen inside the current window, move the window start past it
        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }

        lastSeen[ch] = i;

        int windowLen = i - start + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}
