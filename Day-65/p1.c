//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>

int main() {
    char s[1000], t[1000];

    // Read both strings, one per line
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int count[26] = {0};  // count[0] is for 'a', count[1] for 'b', ...
    int lenS = 0, lenT = 0;

    // Add 1 for every letter in s
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        count[s[i] - 'a']++;
        lenS++;
    }

    // Subtract 1 for every letter in t
    for (int i = 0; t[i] != '\0' && t[i] != '\n' && t[i] != '\r'; i++) {
        count[t[i] - 'a']--;
        lenT++;
    }

    // Different lengths can never be anagrams
    int anagram = (lenS == lenT);

    // If every count is back to 0, both strings have the same frequencies
    for (int i = 0; i < 26 && anagram; i++) {
        if (count[i] != 0) {
            anagram = 0;
        }
    }

    if (anagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
