//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

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

    int next = 0;  // index to start searching from for the next negative

    for (int i = 0; i <= n - k; i++) {
        // Window is arr[i] to arr[i + k - 1].
        // Skip any index that is before the window or not negative.
        if (next < i) next = i;
        while (next < i + k && arr[next] >= 0) {
            next++;
        }

        if (next < i + k)
            printf("%d", arr[next]);   // found a negative inside the window
        else
            printf("0");               // no negative in this window

        if (i < n - k) printf(" ");
    }
    printf("\n");

    return 0;
}
