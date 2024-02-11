// Find the mean number with [Sum of all numbers] / [Number amount]

#include <stdio.h>

double findMean(int arr[], int arrlen) {
    int sum = 0;
    for (int i = 0; i < arrlen; i++) {
        sum += arr[i];
    }
    return (double)sum / arrlen; // Uses (double) to return it as a double instead of a different type
}

int main() {
    int arrlen = 5;
    int arr[arrlen];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < arrlen; i++) {
        scanf("%d", &arr[i]); // Enters 5 numbers using a loop
    }

    double mean = findMean(arr, arrlen);

    printf("Mean: %lf\n", mean);

    return 0;
}

