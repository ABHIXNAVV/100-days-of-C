//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    // Enum constants are plain integers, so %d prints their values directly
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    // Extra proof: an enum value can be stored in an int and used in arithmetic
    // (uncomment the lines below if you want to show this too)
    // int x = TIMEOUT;
    // printf("TIMEOUT + 1 = %d\n", x + 1);

    return 0;
}
