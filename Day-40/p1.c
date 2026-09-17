//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int first = 1;  // helps avoid a trailing space

    // Each diagonal has a constant value of (i + j) = s
    for (int s = 0; s <= rows + cols - 2; s++) {
        // Valid row range on this diagonal
        int start = (s - (cols - 1) > 0) ? s - (cols - 1) : 0;
        int end = (s < rows - 1) ? s : rows - 1;

        if (s % 2 == 1) {
            // Odd diagonal: go top to bottom
            for (int i = start; i <= end; i++) {
                if (!first) printf(" ");
                printf("%d", matrix[i][s - i]);
                first = 0;
            }
        } else {
            // Even diagonal: go bottom to top
            for (int i = end; i >= start; i--) {
                if (!first) printf(" ");
                printf("%d", matrix[i][s - i]);
                first = 0;
            }
        }
    }
    printf("\n");

    return 0;
}
