//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;

    // Input format: number of students, then name, roll, marks for each
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    if (n <= 0) {
        return 0;
    }

    // Assume the first student is the topper, then compare with the rest
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topIndex].name, students[topIndex].marks);

    return 0;
}
