//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char input[50];
    struct Person p;

    // Read the input, e.g. Gender=MALE
    scanf("%49s", input);

    // Skip the "Gender=" part if it is present
    char *value = input;
    if (strncmp(input, "Gender=", 7) == 0) {
        value = input + 7;
    }

    // Convert the text to the matching enum value
    if (strcmp(value, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(value, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(value, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid gender\n");
        return 0;
    }

    // Print the gender based on the enum value stored in the struct
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
