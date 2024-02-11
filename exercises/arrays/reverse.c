// Flips an array

#include <stdio.h>

int main() {
    int arrlen = 4;
    int arr[arrlen];
    int flippedarr[arrlen];
    
    printf("Enter %d numbers: ", arrlen);
    for (int i = 0; i < arrlen; i++) {
        scanf("%d", &arr[i]);
    }

    int n = arrlen; // Uses a seperate variable to go from (arrlen - 1) to (0) instead of (0) to (arrlen - 1)

    for (int i = 0; i < arrlen; i++) {
        n--; // Decreases n by 1
        flippedarr[i] = arr[n];
    }

    printf("\nFlipped array: ");

    for (int i = 0; i < arrlen; i++) {
        printf("%d ", flippedarr[i]);
    }

    printf("\n");

    return 0;
}
