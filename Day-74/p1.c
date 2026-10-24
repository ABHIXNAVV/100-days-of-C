//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char sourceName[100], destName[100];

    // Read both filenames (no spaces expected, so scanf is fine)
    scanf("%99s", sourceName);
    scanf("%99s", destName);

    // Open the source file in read mode
    FILE *src = fopen(sourceName, "r");
    if (src == NULL) {
        printf("Error: could not open %s\n", sourceName);
        return 1;
    }

    // Open (or create) the destination file in write mode
    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: could not create %s\n", destName);
        fclose(src);
        return 1;
    }

    int ch;  // int (not char) so EOF can be detected correctly

    // Read one character at a time and write it to the destination
    while ((ch = fgetc(src)) != EOF) 
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
