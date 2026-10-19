//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int seen[100001];  // seen[x] = 1 once the value x has appeared (values 0 to 100000)

int main() {
    int n;

    // Input format: n, then n elements
    scanf("%d", &n);

    int repeated = -1;

    // Single pass: read each element and check it right away
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (seen[x] == 1) {
            repeated = x;  // this value has appeared before
            break;
        }
        seen[x] = 1;
    }

    printf("%d\n", repeated);

    return 0;
}
