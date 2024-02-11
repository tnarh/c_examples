// Finds the minimum and maximum number

#include <stdio.h>

int findMin(int arr[], int len) {
    int min = arr[0];
    for (int i = 1; i < len; i++) {
        if (min > arr[i]) min = arr[i];
    }
    return min;
}

int findMax(int arr[], int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

int main() {
    int arrlen = 5;
    int arr[] = {9, 81, -3, 5, 22};

    int min = findMin(arr, arrlen);
    int max = findMax(arr, arrlen);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}

