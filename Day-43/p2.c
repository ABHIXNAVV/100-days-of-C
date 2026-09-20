//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[1000];

    // fgets reads the whole line, including spaces
    fgets(str, sizeof(str), stdin);

    // Find the length (without counting the newline)
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }

    // Compare characters from both ends moving toward the middle
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
