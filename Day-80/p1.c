//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() {
    int n;

    // Input format: number of students, then name, roll, marks for each
    scanf("%d", &n);

    // ---------- Part 1: write the records to the file ----------
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create students.txt\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        char name[50];
        int roll, marks;

        // %49s reads one word (no spaces) and avoids overflowing the array
        scanf("%49s %d %d", name, &roll, &marks);

        // Names have no spaces, so fscanf can read them back with %s
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // ---------- Part 2: read the records back and display them ----------
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open students.txt\n");
        return 1;
    }

    char name[50];
    int roll, marks;

    // fscanf returns 3 when it reads all three values successfully
    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
