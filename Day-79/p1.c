//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    // Open the file in read mode
    FILE *fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: could not open numbers.txt\n");
        return 1;
    }

    int num;
    int count = 0;
    long long sum = 0;

    // fscanf returns 1 each time it reads an integer successfully,
    // and stops returning 1 at EOF (or on bad data)
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    // Avoid dividing by zero if the file has no numbers
    if (count == 0) {
        printf("Sum = 0\n");
        printf("Average = 0.00\n");
        return 0;
    }

    double average = (double)sum / count;

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
