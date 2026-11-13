//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    // Read the details of all 5 students
    for (int i = 0; i < 5; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    // Print a table header
    printf("%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("--------------------------------------\n");

    // Print every student as one row
    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
