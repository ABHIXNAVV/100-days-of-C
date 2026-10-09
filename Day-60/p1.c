//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main() {
    int n, k;

    // Input format: n, then n elements, then k
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // No valid window
    if (k <= 0 || k > n) {
        return 0;
    }

    int deque[n];          // stores INDEXES; their values are in decreasing order
    int front = 0, back = -1;  // deque is empty when front > back

    for (int i = 0; i < n; i++) {
        // Remove the index that has slid out of the window
        if (front <= back && deque[front] <= i - k) {
            front++;
        }

        // Remove smaller elements from the back; they can never be a maximum
        while (front <= back && arr[deque[back]] <= arr[i]) {
            back--;
        }

        // Add the current index
        deque[++back] = i;

        // Once the first window is complete, the front holds the maximum
        if (i >= k - 1) {
            printf("%d", arr[deque[front]]);
            if (i < n - 1) printf(" ");
        }
    }
    printf("\n");

    return 0;
}
