//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main() {
    char line[1000];

    // Open the existing file in read mode
    FILE *fp = fopen("info.txt", "r");

    // fopen returns NULL if the file does not exist or cannot be opened
    if (fp == NULL) {
        printf("Error: could not open info.txt\n");
        return 1;
    }

    // fgets returns NULL when EOF is reached (or on error)
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // each line already ends with '\n'
    }

    // Always close the file when done
    fclose(fp);

    return 0;
}
