//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];

    // Read both strings, one per line
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Find the length of each string (without the newline)
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0' && s1[len1] != '\n' && s1[len1] != '\r') len1++;
    while (s2[len2] != '\0' && s2[len2] != '\n' && s2[len2] != '\r') len2++;

    // Strings of different lengths can never be rotations
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Try every possible rotation amount (shift)
    int isRotation = 0;
    for (int shift = 0; shift < len1; shift++) {
        int match = 1;

        // Compare s1 (rotated by 'shift') with s2
        for (int i = 0; i < len1; i++) {
            if (s1[(i + shift) % len1] != s2[i]) {
                match = 0;
                break;
            }
        }

        if (match) {
            isRotation = 1;
            break;
        }
    }

    // Two empty strings are trivially rotations of each other
    if (len1 == 0) isRotation = 1;

    if (isRotation)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
