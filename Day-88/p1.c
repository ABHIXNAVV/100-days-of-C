//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

// Enum values start at 0 and go up by 1 automatically
enum Color { RED, YELLOW, GREEN };

int main() {
    // Names for printing (an enum constant cannot print its own name)
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    // Loop from the first constant to the last one
    for (int c = RED; c <= GREEN; c++) {
        printf("%s=%d\n", names[c], c);
    }

    return 0;
}
