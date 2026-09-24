//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];

    // Read both strings, one per line
    fgets(s1, sizeof(s1), stdin );
    fgets(s2, sizeof(s2), stdin );

    int count[26] = {0};  // count[0] is for 'a', count[1] for 'b', ...

    // Add 1 for every letter in the first string
    for (int i = 0; s1[i] != '\0' && s1[i] != '\n' && s1[i] != '\r'; i++) {
        char ch = s1[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + ('a' - 'A');  // make lowercase
        if (ch >= 'a' && ch <= 'z') count[ch - 'a']++;
    }

    // Subtract 1 for every letter in the second string
    for (int i = 0; s2[i] != '\0' && s2[i] != '\n' && s2[i] != '\r'; i++) {
        char ch = s2[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + ('a' - 'A');  // make lowercase
        if (ch >= 'a' && ch <= 'z') count[ch - 'a']--;
    }

    // If every count is back to 0, both strings have the same letters
    int anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}

