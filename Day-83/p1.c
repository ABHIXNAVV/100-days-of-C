//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    // Month names in the same order as the enum values (0 to 11)
    const char *names[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                           "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

    char input[20];
    scanf("%19s", input);

    // Convert the text to the matching enum value
    int found = -1;
    for (int i = JAN; i <= DEC; i++) {
        if (strcmp(input, names[i]) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid month\n");
        return 0;
    }

    enum Month m = (enum Month)found;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }

    return 0;
}
