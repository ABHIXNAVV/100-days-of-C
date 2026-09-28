//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[100];

    // Read the date as text, e.g. 15/04/2025
    fgets(date, sizeof(date), stdin);

    // Positions in dd/mm/yyyy: day = 0-1, month = 3-4, year = 6-9
    // The month part is "04", which stands for April
    if (date[3] == '0' && date[4] == '4') {
        printf("%c%c-Apr-%c%c%c%c\n",
               date[0], date[1],
               date[6], date[7], date[8], date[9]);
    } else {
        printf("Invalid month\n");
    }

    return 0;
}
