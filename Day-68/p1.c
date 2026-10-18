//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int n;

    // Input format: n, then n elements
    scanf("%d", &n);

    // The array has n elements, taken from 0..n, so exactly one value is missing.
    // Sum of 0..n minus the sum of the array gives the missing number.
    // Note: in your samples, the largest value present can exceed n - 1,
    // so we compute the expected range from the array itself (see below).
    long long actualSum = 0;
    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        actualSum += x;
        if (x > maxVal) maxVal = x;
    }

    // The full range is 0..N where N = max(maxVal, n)
    // Sample 1: [0,3,2,4] -> range 0..4, Sample 2: [1,2,3] -> range 0..3
    int N = (maxVal > n) ? maxVal : n;
    long long expectedSum = (long long)N * (N + 1) / 2;

    printf("%lld\n", expectedSum - actualSum);

    return 0;
}

