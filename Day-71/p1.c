//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Read the name (fgets keeps spaces such as "Rahul Sharma")
    fgets(name, sizeof(name), stdin);

    // Remove the newline that fgets stores at the end of the name
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n' || name[i] == '\r') {
            name[i] = '\0';
            break;
        }
    }

    // Read the age
    scanf("%d", &age);

    // Open (or create) info.txt in write mode
    FILE *fp = fopen("info.txt", "w");

    // fopen returns NULL if the file could not be created
    if (fp == NULL) {
        printf("Error: could not create the file.\n");
        return 1;
    }

    // Write the data to the file
    fprintf(fp, "Name: %s, Age: %d\n", name, age);

    // Always close the file so the data is saved
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
